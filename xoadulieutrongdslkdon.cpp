#include<bits/stdc++.h>

using namespace std;
struct node{
	int data;
	node *next;
};
node *createNode(int x){
	node *p=new node;
	p->data=x;
	p->next=NULL;
	return p;
}
node *addElement(node *l,int x){
	node *p=createNode(x);
	l->next=p;
	return p;
}
void printList(node *l,int x){
	node *p=l;
	while(p!=NULL){
		if(p->data!=x){
			cout<<p->data<<" ";
			p=p->next;
		} else{
			p=p->next;
		}
	}
}
int main(){
	int n,x;
	cin>>n;
	int t;
	cin>>t;
	node *l=createNode(t);
	node *p=l;
	for(int i=1;i<n;i++){
		cin>>t;
		p=addElement(p,t);
	}
	cin>>x;
	printList(l,x);
}

