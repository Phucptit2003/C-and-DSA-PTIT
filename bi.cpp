#include <iostream>

using namespace std;

// Khai báo cấu trúc Node cho cây nhị phân
struct Node
{
    int data;
    Node *left;
    Node *right;
};

// Tạo mới một Node với giá trị val
Node *createNode(int val)
{
    Node *newNode = new Node;
    newNode->data = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Thêm một Node lá mới vào bên trái Node p
void addLeftNode(Node *p, int val)
{
    Node *newNode = createNode(val);
    p->left = newNode;
}

// Thêm một Node lá mới vào bên phải Node p
void addRightNode(Node *p, int val)
{
    Node *newNode = createNode(val);
    p->right = newNode;
}

// Xoá Node lá bên trái của Node p
void removeLeftNode(Node *p)
{
    if (p->left != NULL)
    {
        delete p->left;
        p->left = NULL;
    }
}

// Xoá Node lá bên phải của Node p
void removeRightNode(Node *p)
{
    if (p->right != NULL)
    {
        delete p->right;
        p->right = NULL;
    }
}

// Xoá toàn bộ cây
void removeAllNodes(Node *p)
{
    if (p != NULL)
    {
        removeAllNodes(p->left);
        removeAllNodes(p->right);
        delete p;
    }
}

// Tìm kiếm Node với giá trị val trong cây
Node *searchNode(Node *p, int val)
{
    if (p == NULL || p->data == val)
    {
        return p;
    }
    else if (val < p->data)
    {
        return searchNode(p->left, val);
    }
    else
    {
        return searchNode(p->right, val);
    }
}

// Duyệt cây theo thứ tự ngược (right, root, left)
void reverseInorderTraversal(Node *p)
{
    if (p != NULL)
    {
        reverseInorderTraversal(p->right);
        cout << p->data << " ";
        reverseInorderTraversal(p->left);
    }
}

// Duyệt cây theo thứ tự giữa (left, root, right)
void inorderTraversal(Node *p)
{
    if (p != NULL)
    {
        inorderTraversal(p->left);
        cout << p->data << " ";
        inorderTraversal(p->right);
    }
}

// Duyệt cây theo thứ tự sau (left, right, root)
void postorderTraversal(Node *p)
{
    if (p != NULL)
    {
        postorderTraversal(p->left);
        postorderTraversal(p->right);
        cout << p->data << " ";
    }
}

int main()
{
    // Tạo cây nhị phân với Node gốc có giá trị là 10
    Node *root = createNode(10);

    // Thêm một Node lá mới vào bên trái Node gốc
    addLeftNode(root, 5);

    // Thêm một Node lá mới vào bên phải Node gốc
    addRightNode(root, 15);

    // Thêm một Node lá mới vào bên trái của Node lá bên trái Node gốc
    addLeftNode(root->left, 3);

    // Thêm một Node lá mới vào bên phải của Node lá bên trái Node gốc
    addRightNode(root->left, 7);

    // Thêm một Node lá mới vào bên trái của Node lá bên phải Node gốc
    addLeftNode(root->right, 13);

    // Thêm một Node lá mới vào bên phải của Node lá bên phải Node gốc
    addRightNode(root->right, 17);

    // In ra cây nhị phân
    cout << "Cay nhi phan: ";
    inorderTraversal(root);
    cout << endl;

    // Tìm kiếm Node với giá trị 13
    Node *node = searchNode(root, 13);
    if (node != NULL)
    {
        cout << "Tim thay Node voi gia tri 13" << endl;
    }
    else
    {
        cout << "Khong tim thay Node voi gia tri 13" << endl;
    }

    // Xoá Node lá bên phải của Node lá bên trái Node gốc
    removeRightNode(root->left);

    // In ra cây nhị phân
    cout << "Cay nhi phan sau khi xoa Node ben phai cua Node ben trai Node goc: ";
    inorderTraversal(root);
    cout << endl;

    // Xoá toàn bộ cây
    removeAllNodes(root);

    return 0;
}
