#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct Node
{
    int key;
    Node *left, *right;
    int height;
    Node(int x)
    {
        key = x;
        left = right = NULL;
        height = 1;
    }
};
int getHeight(Node *node)
{
    if (node == NULL)
        return 0;
    return node->height;
}

int getBalance(Node *node)
{
    if (node == NULL)
        return 0;
    return getHeight(node->left) - getHeight(node->right);
}

Node *rightRotate(Node *y)
{
    Node *x = y->left;
    Node *T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;

    return x;
}

Node *leftRotate(Node *x)
{
    Node *y = x->right;
    Node *T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;

    return y;
}

Node *insertNode(Node *node, int key)
{
    if (node == NULL)
        return new Node(key);

    if (key < node->key)
        node->left = insertNode(node->left, key);
    else if (key > node->key)
        node->right = insertNode(node->right, key);
    else 
        return node;

    node->height = 1 + max(getHeight(node->left), getHeight(node->right));

    int balance = getBalance(node);

    if (balance > 1 && key < node->left->key)
        return rightRotate(node);

    if (balance < -1 && key > node->right->key)
        return leftRotate(node);

    if (balance > 1 && key > node->left->key)
    {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    if (balance < -1 && key < node->right->key)
    {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node;
}

// Hàm xóa node
Node* deleteNode(Node* root, int key)
{
    if (root == NULL) 
        return root;
  
    if (key < root->key)
        root->left = deleteNode(root->left, key);
    else if (key > root->key)
        root->right = deleteNode(root->right, key);
    else
    {
        if ((root->left == NULL) || (root->right == NULL))
        {
            Node* temp = root->left ? root->left : root->right;

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
            Node* temp = root->left;
            while (temp->right != NULL)
                temp = temp->right;
  
            root->key = temp->key;
            root->left = deleteNode(root->left, temp->key);
        }
    }

    if (root == NULL)
        return root;
  
    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
  
    int balance = getBalance(root);
  
    if (balance > 1 && getBalance(root->left) >= 0)
        return rightRotate(root);
    if (balance > 1 && getBalance(root->left) < 0)
    {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    if (balance < -1 && getBalance(root->right) <= 0)
        return leftRotate(root);
  
    if (balance < -1 && getBalance(root->right) > 0)
    {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }
  
    return root;
}

void duyetGiua(Node* root) {
    if (root != NULL) {
        duyetGiua(root->left);
        cout << root->key << " ";
        duyetGiua(root->right);
    }
}

int main(){
    Node *Tree = NULL;

    Tree = insertNode(Tree, 30);
    Tree = insertNode(Tree, 40);
    Tree = insertNode(Tree, 50);
    Tree = insertNode(Tree, 60);
    Tree = insertNode(Tree, 70);
    Tree = insertNode(Tree, 80);

    Tree = deleteNode(Tree, 30);
    Tree = deleteNode(Tree, 80);

    duyetGiua(Tree); 
}
// Code AVL
