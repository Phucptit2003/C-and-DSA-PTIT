#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    int height;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        height = 1;
        left = right = nullptr;
    }
};

int getHeight(Node* node) {
    if (node == nullptr) {
        return 0;
    }
    return node->height;
}

int getBalanceFactor(Node* node) {
    if (node == nullptr) {
        return 0;
    }
    return getHeight(node->left) - getHeight(node->right);
}

Node* rightRotate(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;

    return x;
}

Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;

    return y;
}

Node* insert(Node* root, int data) {
    if (root == nullptr) {
        return new Node(data);
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    } else {
        return root; // Không chèn các ph?n t? có giá tr? trùng l?p
    }

    root->height = 1 + max(getHeight(root->left), getHeight(root->right));

    int balanceFactor = getBalanceFactor(root);

    // Tru?ng h?p m?t cân b?ng

    // Left Left case
    if (balanceFactor > 1 && data < root->left->data) {
        return rightRotate(root);
    }

    // Right Right case
    if (balanceFactor < -1 && data > root->right->data) {
        return leftRotate(root);
    }

    // Left Right case
    if (balanceFactor > 1 && data > root->left->data) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    // Right Left case
    if (balanceFactor < -1 && data < root->right->data) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

void postOrder(Node* root) {
    if (root == nullptr) {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        Node* root = nullptr;
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            root = insert(root, a[i]);
        }

        postOrder(root);
        cout << "\n";
    }

    return 0;
}

