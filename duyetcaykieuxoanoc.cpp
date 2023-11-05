#include<bits/stdc++.h>

using namespace std;

struct Tree{
	int data;
	Tree *left;
	Tree *right;
};
typedef Tree *tree;

tree create(int x){
	tree tmp=new Tree;
	tmp->data=x;
	tmp->left=tmp->right=NULL;
	return tmp;
}

void Push(tree t,int u, int v,char x){
	if(t==NULL) return;
	else{
		if(t->data==u){
			if(x=='L') t->left=create(v);
			else t->right=create(v);
		}
		else {
			Push(t->left,u,v,x);
			Push(t->right,u,v,x);
		}
	}
}

void Duyet(tree t){
	stack<tree>st1,st2;
	tree tmp;
	st1.push(t);
	while(!st1.empty()||!st2.empty()){
		while(st1.size()){
			tmp=st1.top();
			cout<<tmp->data<<" ";
			st1.pop();
			
			if(tmp->right!=NULL){
				st2.push(tmp->right);
			}
			if(tmp->left!=NULL){
				st2.push(tmp->left);
			}
		}
		while(st2.size()){
			tmp=st2.top();
			cout<<tmp->data<<" ";
			st2.pop();
			if(tmp->left!=NULL){
				st1.push(tmp->left);
			}
			if(tmp->right!=NULL){
				st1.push(tmp->right);
			}
		}
	}
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
		t=create(u);
		Push(t,u,v,x);
		n--;
		for(int i=1;i<=n;i++){
			cin>>u>>v>>x;
			Push(t,u,v,x);
		}
		Duyet(t);
		cout<<endl;
	}
}

