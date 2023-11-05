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
node *deleteHead(node *l){
    node *p=l;
    p=p->next;
    delete(l);
    return p;
}
node *deleteTail(node *l){
    node *p=l;
    while(p->next->next!=NULL){
        p=p->next;
    }
    delete(p->next);
    p->next=NULL;
    return l;
}
node *deleteAt(node *l,int k){
    node *p=l;
    for(int i=0;i<k-1;i++){
        p=p->next;
    }
    node *tmp=p->next;
    p->next=p->next->next;
    delete(tmp);
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
    cin>>k;
    if(k==0){
        l=deleteHead(l);
    } else if(k==n-1){
        l=deleteTail(l);
    } else {
        l=deleteAt(l,k);
    }
    printList(l);
}
