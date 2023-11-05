#include <iostream>
using namespace std;

// Định nghĩa một nút cho cây nhị phân tìm kiếm
struct Node {
    int value;
    Node* left;
    Node* right;
    Node(int val): value(val), left(nullptr), right(nullptr) {}
};

// Tạo node gốc cho cây
Node* createRoot(int val) {
    Node* root = new Node(val);
    return root;
}

// Thêm vào node vào cây tìm kiếm
void insert(Node*& root, int val) {
    if (root == nullptr) {
        root = new Node(val);
        return;
    }
    if (val < root->value) {
        insert(root->left, val);
    }
    else {
        insert(root->right, val);
    }
}

// Loại bỏ node trên cây tìm kiếm
Node* remove(Node*& root, int val) {
    if (root == nullptr) {
        return root;
    }
    if (val < root->value) {
        root->left = remove(root->left, val);
    }
    else if (val > root->value) {
        root->right = remove(root->right, val);
    }
    else {
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        Node* temp = root->right;
        while (temp->left != nullptr) {
            temp = temp->left;
        }
        root->value = temp->value;
        root->right = remove(root->right, temp->value);
    }
    return root;
}

// Tìm kiếm node trên cây
Node* search(Node* root, int val) {
    if (root == nullptr || root->value == val) {
        return root;
    }
    if (val < root->value) {
        return search(root->left, val);
    }
    else {
        return search(root->right, val);
    }
}

// Xoay trái cây tìm kiếm
Node* rotateLeft(Node* root) {
    Node* newRoot = root->right;
    root->right = newRoot->left;
    newRoot->left = root;
    return newRoot;
}

// Xoay phải cây tìm kiếm
Node* rotateRight(Node* root) {
    Node* newRoot = root->left;
    root->left = newRoot->right;
    newRoot->right = root;
    return newRoot;
}

// Duyệt cây theo thứ tự trước
void preOrder(Node* root) {
    if (root != nullptr) {
        cout << root->value << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

// Duyệt cây theo thứ tự giữa
void inOrder(Node* root) {
    if (root != nullptr) {
        inOrder(root->left);
        cout << root->value << " ";
        inOrder(root->right);
    }
}

// Duyệt cây theo thứ tự sau
void postOrder(Node* root) {
    if(root != nullptr) {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->value << " ";
    }
}

// Hàm main để kiểm tra các thao tác trên cây
int main() {
    Node* root = createRoot(50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    insert(root,100);
    cout << "Cay ban dau: ";
    inOrder(root);
    cout << endl;

    remove(root, 20);
    remove(root, 30);

    cout << "Cay sau khi xoa: ";
    inOrder(root);
    cout << endl;

    Node* searchResult = search(root, 100);
    if (searchResult != nullptr) {
        cout << "Tim thay node: " << searchResult->value << endl;
    }
    else {
        cout << "Khong tim thay node" << endl;
    }

    root = rotateLeft(root);

    cout << "Cay sau khi xoay trai: ";
    inOrder(root);
    cout << endl;

    root = rotateRight(root);

    cout << "Cay sau khi xoay phai: ";
    inOrder(root);
    cout << endl;

    return 0;
}
