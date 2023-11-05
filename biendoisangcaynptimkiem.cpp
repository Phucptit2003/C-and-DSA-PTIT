#include<bits/stdc++.h>

using namespace std;
int n,u,v;
char x;
struct Tree{
	int data;
	Tree *left;
	Tree *right;
};
typedef Tree* tree;
tree create(int x){
	tree tmp=new Tree;
	tmp->data=x;
	tmp->left=tmp->right=NULL;
	return tmp;
}

void Push(tree t,int u,int v,char x){
	if(t==NULL) return;
	else{
		if(t->data==u){
			if(x=='L') t->left=create(v);
			else t->right=create(v);
		}
		else{
			Push(t->left,u,v,x);
			Push(t->right,u,v,x);
		}
	}
}
void BFS(tree t){
	queue<tree>qe;
	tree tmp;
	qe.push(t);
	while(qe.size()){
		tmp=qe.front();
		cout<<tmp->data<<" ";
		qe.pop();
		if(tmp->left!=NULL) qe.push(tmp->left);
		if(tmp->right!=NULL) qe.push(tmp->right);
	}
}

int main(){
	int test;
	cin>>test;
	while(test--){	
		tree t=NULL;	
		cin>>n;
		cin>>u>>v>>x;
		n--;
		t=create(u);
		Push(t,u,v,x);
		for(int i=1;i<=n;i++){
			cin>>u>>v>>x;
			Push(t,u,v,x);
		}
		BFS(t);
		cout<<endl;
	}
}

