#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
node *createNode(int x){
    node *tmp=new node;
    tmp->data=x;
    tmp->next=NULL;
    return tmp;
}
node *addElement(node *p,int x){
    node *tmp=createNode(x);
    p->next=tmp;
    return tmp;
}
node *addHead(node *l,int x){
    node *tmp=new node;
    tmp->data=x;
    tmp->next=l;
    l=tmp;
    return l;
}
node *addTail(node *l,int x){
    node *p=l;
    while(p->next!=NULL){
        p=p->next;
    }
    node *tmp=new node;
    tmp->data=x;
    tmp->next=NULL;
    p->next=tmp;
    return l;
}
node *addAt(node *l,int k,int x){
    node *p=l;
    for(int i=0;i<k-1;i++){
        p=p->next;
    }
    node *tmp=new node;
    tmp->data=x;
    tmp->next=p->next;
    p->next=tmp;
    return l;
}
void printList(node *l){
    node *p=l;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main(){
    int n,x,k;
    cin>>n>>x;
    node *l=createNode(x);
    node *p=l;
    for(int i=1;i<n;i++){
        cin>>x;
        p=addElement(p,x);
    }
    cin>>k>>x;
    if(k==0){
        l=addHead(l,x);
    } else if(k==n-1){
        l=addTail(l,x);
    } else{
        l=addAt(l,k,x);
    }
    printList(l);
}
