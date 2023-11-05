#include<bits/stdc++.h>

using namespace std;

struct Tree{
	char data;
	Tree *left;
	Tree *right;
};

typedef struct Tree *tree;

tree create(char c){
	tree res= new Tree;
	res->data= c;
	res->left=res->right=NULL;
	return res;
}

void Duyet(tree t){
	if(t!=NULL){
		Duyet(t->left);
		cout<<t->data;
		Duyet(t->right);
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		stack<tree>st;
		for(char &i:s){
			if(i=='+'||i=='-'||i=='*'||i=='/'){
				tree tmp=create(i);
				tmp->right=st.top();
				st.pop();
				tmp->left=st.top();
				st.pop();
				st.push(tmp);
			}
			else st.push(create(i));
		}
		Duyet(st.top());
		cout<<endl;
	}
}

