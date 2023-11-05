#include <iostream>

using namespace std;

// Khai báo cấu trúc của một node trên cây AVL
struct Node
{
    int key;
    Node *left;
    Node *right;
    int height;
};

// Tạo một node mới với giá trị key
Node *newNode(int key)
{
    Node *node = new Node();
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1; // Chiều cao ban đầu của node là 1
    return node;
}

// Tính chiều cao của một node
int height(Node *node)
{
    if (node == NULL)
    {
        return 0;
    }
    return node->height;
}

// Tính chiều cao khác của hai cây con
int balanceFactor(Node *node)
{
    if (node == NULL)
    {
        return 0;
    }
    return height(node->left) - height(node->right);
}

// Xoay trái cây AVL
Node *rotateLeft(Node *node)
{
    Node *newRoot = node->right;
    node->right = newRoot->left;
    newRoot->left = node;
    node->height = max(height(node->left), height(node->right)) + 1;
    newRoot->height = max(height(newRoot->left), height(newRoot->right)) + 1;
    return newRoot;
}

// Xoay phải cây AVL
Node *rotateRight(Node *node)
{
    Node *newRoot = node->left;
    node->left = newRoot->right;
    newRoot->right = node;
    node->height = max(height(node->left), height(node->right)) + 1;
    newRoot->height = max(height(newRoot->left), height(newRoot->right)) + 1;
    return newRoot;
}

// Thêm node vào cây AVL
Node *insert(Node *node, int key)
{
    // Thêm node vào cây nhị phân tìm kiếm bình thường
    if (node == NULL)
    {
        return newNode(key);
    }
    if (key < node->key)
    {
        node->left = insert(node->left, key);
    }
    else if (key > node->key)
    {
        node->right = insert(node->right, key);
    }
    else
    {
        // Node đã tồn tại
        return node;
    }
    // Cập nhật chiều cao của node cha
    node->height = max(height(node->left), height(node->right)) + 1;
    // Tính chiều cao khác của hai cây con
    int balance = balanceFactor(node);
    // Nếu cây không cân bằng, ta cân bằng lại bằng cách xoay trái/phải
    if (balance > 1 && key < node->left->key)
    {
        return rotateRight(node);
    }
    if (balance > 1 && key > node->left->key)
    {
        node->left = rotateLeft(node->left);
        return rotateRight(node);
    }
    if (balance < -1 && key > node->right->key)
    {
        return rotateLeft(node);
    }
    if (balance < -1 && key < node->right->key)
    {
        node->right = rotateRight(node->right);
        return rotateLeft(node);
    }
    return node;
}

// Tìm node có giá trị nhỏ nhất trên cây con phải
Node *minValueNode(Node *node)
{
    Node *current = node;
    while (current->left != NULL)
    {
        current = current->left;
    }
    return current;
}

// Loại bỏ node khỏi cây AVL
Node *remove(Node *root, int key)
{
    // Thực hiện xóa như trên cây nhị phân tìm kiếm
    if (root == NULL)
    {
        return root;
    }
    if (key < root->key)
    {
        root->left = remove(root->left, key);
    }
    else if (key > root->key)
    {
        root->right = remove(root->right, key);
    }
    else
    {
        if (root->left == NULL || root->right == NULL)
        {
            Node *temp = root->left ? root->left : root->right;
            if (temp == NULL)
            {
                temp = root;
                root = NULL;
            }
            else
            {
                *root = *temp;
                delete temp;
            }
        }
        else
        {
            Node *temp = minValueNode(root->right);
            root->key = temp->key;
            root->right = remove(root->right, temp->key);
        }
    }
    // Nếu cây rỗng, hoặc chỉ có một node, trả về cây ban đầu
    if (root == NULL)
    {
        return root;
    }
    // Cập nhật chiều cao của node cha
    root->height = max(height(root->left), height(root->right)) + 1;
    // Tính chiều cao khác của hai cây con
    int balance = balanceFactor(root);
    // Nếu cây không cân bằng, ta cân bằng lại bằng cách xoay trái/phải
    if (balance > 1 && balanceFactor(root->left) >= 0)
    {
        return rotateRight(root);
    }
    if (balance > 1 && balanceFactor(root->left) < 0)
    {
        root->left = rotateLeft(root->left);
        return rotateRight(root);
    }
    if (balance < -1 && balanceFactor(root->right) <= 0)
    {
        return rotateLeft(root);
    }
    if (balance < -1 && balanceFactor(root->right) > 0)
    {
        root->right = rotateRight(root->right);
        return rotateLeft(root);
    }
    return root;
}

// Inorder traversal để in ra cây AVL
void inorderTraversal(Node *root)
{
    if (root != NULL)
    {
        inorderTraversal(root->left);
        cout << root->key << " ";
        inorderTraversal(root->right);
    }
}

// Hàm main để kiểm tra các thao tác trên cây AVL
int main()
{
    Node *root = NULL;
    // Thêm node vào cây AVL
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 25);

    // Inorder traversal để in ra cây AVL
    cout << "Inorder traversal of the AVL tree is: ";
    inorderTraversal(root);
    cout << endl;

    // Loại bỏ node khỏi cây AVL
    root = remove(root, 30);

    // Inorder traversal để in ra cây AVL sau khi loại bỏ node 30
    cout << "Inorder traversal of the AVL tree after removing node 30 is: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}

