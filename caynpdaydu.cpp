#include<bits/stdc++.h>
using namespace std;
int n,m;
struct node{
    int val;
    node* r;
    node* l;

    node(int x)
    {
        val=x;
        l=NULL;
        r=NULL;
    }
};
void create(node* pa, int u, int v, char a)
{
    if(a=='L') pa->l=new node(v);
    else pa->r= new node(v);
}
void insert(node* pa, int u, int v, char a)
{
    if(pa==NULL) return;
    if(pa->val==u) create(pa,u,v,a);
    else {
        insert(pa->l,u,v,a);
        insert(pa->r,u,v,a);
    }
}
bool dfs(node*root)
{
    stack<node*> s;
    s.push(root);
    node* x;
    while(!s.empty())
    {
        x=s.top();
        s.pop();
        if((x->l==NULL)^(x->r==NULL)) return false;
        if(x->l!=NULL) s.push(x->l);
        if(x->r!=NULL) s.push(x->r);
    }
    return true;
}

void solve()
{
    node* root;
    cin>>n;
    root=NULL;
    for(int i=1;i<=n;i++)
    {
        int u,v;
        char a;
        cin>>u>>v>>a;
        if(root==NULL)
        {
            root = new node(u);
            create(root,u,v,a);
        }
        else insert(root,u,v,a);
    }
    if(dfs(root)) cout<<"YES\n";
    else cout<<"NO\n";
}
int main()
{
    int t=1;
    cin>>t;
    while(t--) solve();
}