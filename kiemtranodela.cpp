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

void build(tree &t,int u,int v, char x){
	if(t!=NULL){
		if(t->x==u){
			if(x=='L'){
				t->left=create(v);
			}
			else t->right=create(v);
		}
		build(t->left,u,v,x);
		build(t->right,u,v,x);
	}
}
int Duyet(tree t){
	queue<pair<tree,int>>qe;
	pair<tree,int>top;
	int Max=-1;
	qe.push({t,0});
	while(qe.size()){
		top=qe.front();
		qe.pop();
		if((top.first->left==NULL)){
			if(Max==-1) Max=top.second;
			else if(top.second!=Max) return 0;
		}
		else qe.push({top.first->left,top.second+1});
		
		if(top.first->right==NULL){
			if(Max==-1) Max=top.second;
			else if(Max!=top.second) return 0;
		}
		else qe.push({top.first->right,top.second+1});
	}
	return 1;
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
		cout<<Duyet(t)<<endl;
	}
}

