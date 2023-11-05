#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool isFullBinaryTree(TreeNode* root) {
    if (root == NULL)
        return true;
    
    // Ki?m tra tru?ng h?p d?c bi?t: node g?c không có con
    if (root->left == NULL && root->right == NULL)
        return true;
    
    // Ki?m tra tru?ng h?p: node g?c có c? hai con
    if (root->left != NULL && root->right != NULL)
        return isFullBinaryTree(root->left) && isFullBinaryTree(root->right);
    
    // Tru?ng h?p còn l?i: node g?c ch? có m?t con
    return false;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        vector<TreeNode*> nodes(N + 1);
        
        for (int i = 1; i <= N; i++) {
            int u, v;
            char x;
            cin >> u >> v >> x;
            
            if (nodes[u] == NULL) {
                nodes[u] = new TreeNode(u);
            }
            if (nodes[v] == NULL) {
                nodes[v] = new TreeNode(v);
            }
            
            if (x == 'R') {
                nodes[u]->right = nodes[v];
            } else if (x == 'L') {
                nodes[u]->left = nodes[v];
            }
        }
        
        bool isFull = isFullBinaryTree(nodes[1]);
        cout << (isFull ? "Yes" : "No") << endl;
    }
    
    return 0;
}

