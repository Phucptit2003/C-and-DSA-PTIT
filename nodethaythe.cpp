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
node *Change(node *l,int a,int b){
    node *p=l;
    while(p!=NULL){
        if(p->data==a){
            p->data=b;
        }
        p=p->next;
    }
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
    l=Change(l,k,x);
    printList(l);
}
