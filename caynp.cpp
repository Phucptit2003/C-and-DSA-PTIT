#include<bits/stdc++.h>

using namespace std;

struct node{
		int data;
		node *right;
		node *left;
		
};
typedef struct node NODE;
typedef NODE* TREE;

void KhoiTaoCay(TREE &t){
	t=NULL;
	
}

void Themptu(TREE &t, int x){
	if(t==NULL){
		NODE *p=new NODE;
		p->data=x;
		p->left=NULL;
		p->right=NULL;
		t=p;
	}
	else {
		if(t->data>x){
			Themptu(t->left,x);
		}
		else if(t->data<x) {
			Themptu(t->right,x);
		}
	}
}

void Duyet(TREE t){
	if(t!=NULL){
		cout<<t->data<<" ";
		Duyet(t->left);
		Duyet(t->right);
	}
}
void Nhap(TREE &t){
	int n;
	cin>>n;
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		Themptu(t,x);
	}
	Duyet(t);
}
int main(){
	node *t;
	KhoiTaoCay(t);
	Nhap(t);
	
}

