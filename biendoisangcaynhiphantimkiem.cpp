#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
int T,n,u,v,root;
char c;
struct node{
    int l,r,val;
}tree[N];
void build(){
    root=1;
    for(int i=1;i<=n;i++){
        int now=root;
        while(1){
            if(c=='L'){
                if(!tree[now].l){
                    tree[now].l=i+1;
                    now=i+1;
                    break;
                }
                else now=tree[now].l;
            }
            else{
                if(!tree[now].r){
                    tree[now].r=i+1;
                    now=i+1;
                    break;
                }
                else now=tree[now].r;
            }
            cin>>u>>v>>c;
        }
        tree[i+1].val=v;
    }
}
void dfs(int now){
    if(!now) return;
    dfs(tree[now].l);
    cout<<tree[now].val<<" ";
    dfs(tree[now].r);
}
int main(){
    cin>>T;
    while(T--){
        cin>>n>>u>>v>>c;
        memset(tree,0,sizeof(tree));
        tree[1].val=u;
        build();
        dfs(1);
        cout<<endl;
    }
    return 0;
}

