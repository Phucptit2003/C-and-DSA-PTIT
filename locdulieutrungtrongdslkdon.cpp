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
void printList(node *l){
	node *p=l;
	vector<int>v;
	int a[1000]={0};
	while(p!=NULL){
		if(a[p->data]==0){
			v.push_back(p->data);
			a[p->data]=1;
			p=p->next;
		} else p=p->next;
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
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
	printList(l);
}

