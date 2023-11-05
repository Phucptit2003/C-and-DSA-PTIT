#include<bits/stdc++.h>

using namespace std;
int n;
string a[150];
struct Node{
	string data;
	Node *left;
	Node *right;
};
typedef Node *node;

node create(string s){
	node tmp=new Node;
	tmp->data=s;
	tmp->left=tmp->right=NULL;
	return tmp;
}

node build(node t, int i){
	if(i<n){
		t=create(a[i]);
		t->left=build(t->left,(i*2)+1);
		t->right=build(t->right,(i*2)+2);
	}
	return t;
}
long long Tinh(node t){
	if(t->data!="+"&&t->data!="-"&&t->data!="*"&&t->data!="/"){
		return stoll(t->data);
	}
	if(t->data=="+"){
		return Tinh(t->left)+ Tinh(t->right);
	}
	else if(t->data=="-"){
		return Tinh(t->left) - Tinh(t->right);
	}	
	else if(t->data=="*"){
		return Tinh(t->left) * Tinh(t->right);
	}	
	else if(t->data=="/"){
		return Tinh(t->left) / Tinh(t->right);
	}	
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		node t=NULL;
		t=build(t,0);
		cout<<Tinh(t)<<endl;
	}
}

