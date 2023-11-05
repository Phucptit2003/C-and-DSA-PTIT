#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int val;
    Node *left, *right;
};

typedef Node* binTree;

inline binTree createNode(int val)
{
    binTree res = new Node;
    res -> val = val;
    res -> left = res -> right = NULL;
    return res;
}

inline void buildTree(binTree &T, int val)
{
    if(T == NULL)
        T = createNode(val);
    else
    {
        if(T -> val > val)
            buildTree(T -> left, val);
        else
            buildTree(T -> right, val);
    }
}

inline void order(binTree T)
{
    if(T)
    {
        cout << T -> val << ' ';
        if(T -> left)
            order(T -> left);
        if(T -> right)
            order(T -> right);
    }
}

int main()
{
    faster();
    int t = 1, n, x;
    cin >> t;
    while(t--)
    {
        cin >> n;
        binTree T = NULL;
        while(n--)
        {
            cin >> x;
            buildTree(T, x);
        }
        order(T);
        cout << endl;
    }
    return 0;
}

