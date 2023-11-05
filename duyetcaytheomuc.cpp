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

void build(tree &a, int u, int v, char x){
	if(a!=NULL){
		if(a->x==u){
			if(x=='L'){
				a->left=create(v);
			}
			else {
				a->right=create(v);
			}
		}
		build(a->left,u,v,x);
		build(a->right,u,v,x);
	}
}
void Duyet(tree t){
	queue<tree>qe;
	tree top;
	qe.push(t);
	while(qe.size()){
		top=qe.front();
		qe.pop();
		cout<<top->x<<" ";
		if(top->left!=NULL) qe.push(top->left);
		if(top->right!=NULL) qe.push(top->right);
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		tree t=NULL;
		int u,v;
		char x;
		cin>>u>>v>>x;
		t=create(u);
		build(t,u,v,x);
		for(int i=1;i<n;i++){
			cin>>u>>v>>x;
			build(t,u,v,x);
		}
		Duyet(t);
		cout<<endl;
	}
}

