#include<bits/stdc++.h>

using namespace std;

struct Tree{
	int data;
	Tree *left;
	Tree *right;
};
typedef Tree *tree;

tree Them(int data){
	tree tmp=new Tree;
	tmp->data=data;
	tmp->left=tmp->right=NULL;
	return tmp;
}

void push(tree t,int u,int v,char x){
		if(t==NULL) return;
		if(t->data==u){
			if(x=='L') {
				t->left=Them(v);
			}
			else t->right=Them(v);
		}
		else{
			push(t->left,u,v,x);
			push(t->right,u,v,x);
		}
}

bool dfs(tree t){
	stack<tree>st;
	tree tmp;
	st.push(t);
	while(!st.empty()){
		tmp=st.top();
		st.pop();
		if((tmp->left==NULL) ^ (tmp->right==NULL)) return false;
		if(tmp->left!=NULL) st.push(tmp->left);
		if(tmp->right!=NULL) st.push(tmp->right);
	}
	return true;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		tree t=NULL;
		int n;
		cin>>n;
		int u,v;
		char x;
		cin>>u>>v>>x;
		t=Them(u);
		push(t,u,v,x);
		n--;
		for(int i=1;i<=n;i++){
			cin>>u>>v>>x;
			push(t,u,v,x);
		}
		if(dfs(t)) cout<<"1\n";
		else cout<<"0\n";
		
	}
}

