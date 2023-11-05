#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
// tao node moi
node *createNode(int x){
    node *tmp=new node;
    tmp->data=x;
    tmp->next=NULL;
    return tmp;
}
// them phan tu x vao node p
node *addElement(node *p,int x){
    node *tmp=createNode(x);
    p->next=tmp;
    return tmp;
}
// them vao dau node
node *addHead(node *l,int x){
    node *tmp=new node;
    tmp->data=x;
    tmp->next=l;
    l=tmp;
    return l;
}
// them vao cuoi node
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
//them vao vi tri bky khac dau va cuoi node
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
// xoa o dau node
node *deleteHead(node *l){
    node *p=l;
    p=p->next;
    delete(l);
    return p;
}
// xoa o cuoi node
node *deleteTail(node *l){
    node *p=l;
    while(p->next->next!=NULL){
        p=p->next;
    }
    delete(p->next);
    p->next=NULL;
    return l;
}
// xoa o vtri bky
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
// thay the
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
// in node
void printList(node *l){
    node *p=l;
    cout<<"The linked list is: ";
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
int main(){
    int n,x,k;  
    cout<<"Nhap so luong va phan tu muon them vao node: ";
	cin>>n>>x;
    node *l=createNode(x);
    node *p=l;
    for(int i=1;i<n;i++){
        cin>>x;
        p=addElement(p,x);
    }
   	printList(l);
   	// them node vao vi tri
   	cout<<"Nhap vi tri va phan tu muon them: ";
   	int pos,val;
   	cin>>pos>>val;
    if(pos==0){ // them vao dau
        l=addHead(l,val);
    } else if(pos==n-1){ // them vao cuoi
        l=addTail(l,val);
    } else{
        l=addAt(l,pos,val); // them vao vi tri bat ky
    }
    printList(l);
    // xoa vi tri pos 
    cout<<"Nhap vi tri muon xoa: ";
    cin>> pos;
    if(pos==0){
        l=deleteHead(l);
    } else if(pos==n-1){
        l=deleteTail(l);
    } else {
        l=deleteAt(l,pos);
    }
    printList(l);
    //thay the node
    cin>>pos>>val;
    l=Change(l,pos,val);
    printList(l);
}
