#include<bits/stdc++.h>

using namespace std;
struct Tree{
	int x;
	Tree *left;
	Tree *right;
};
typedef Tree *tree;

tree create(int x){
	tree tmp=new Tree;
	tmp->x=x;
	tmp->left=tmp->right=NULL;
	return tmp;
}

void build(tree &t,int u, int v, char x){
	if(t==NULL) return;
	if(t!=NULL){
		if(x=='L'){
			t->left=create(v);
		} else t->right=create(v);
		build(t->left,u,v,x);
		build(t->right,u,v,x);
	}
}
bool Duyet(tree t){
	queue<pair<tree,int>>qe;
	pair<tree,int>top;
	qe.push({t,0});
	int Max=-1;
	while(qe.size()){
		top=qe.front();
		qe.pop();
		if(top.first->left==NULL){
			if(Max==-1) Max=top.second;
			else if(top.second!=Max) return false;
		}
		else qe.push({top.first->left,top.second+1});
		if(top.first->right==NULL){
			if(Max==-1) Max=top.second;

			else if(top.second!=Max) return false;
		}
		else qe.push({top.first->right,top.second+1});		
	}
	return true;
}

bool Check(tree t){
	if(t->left==NULL&&t->right!=NULL) return false;
	if(t->right==NULL && t->left!=NULL) return false;
	Check(t->left);
	Check(t->right);
	return true;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		tree t;
		int n;
		cin>>n;
		int u,v;
		char x;
		cin>>u>>v>>x;
		t=create(u);
		build(t,u,v,x);
		n--;
		while(n--){
			cin>>u>>v>>x;
			build(t,u,v,x);
		}
		if(Duyet(t)) cout<<"Yes\n";
		else cout<<"No\n";
	}
}

