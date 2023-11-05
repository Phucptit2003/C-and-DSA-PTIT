#include<bits/stdc++.h>

using namespace std;
struct node { 
	int info; 
	struct node *next; 
	struct node *prev; 
}*start; 
class double_linked_list { 
	public:
	node* create_node(int);
	void insert_begin(); 
	void insert_last();
	void Duyet();
	double_linked_list(){
	start = NULL;
	}
};
// tao node
node *double_linked_list::create_node(int value){
	struct node *temp; 
	temp = new(struct node); 
	temp->info = value;
	temp->next = NULL;
	temp->prev = NULL; 
	return temp;
} 
// them vao dau
void double_linked_list::insert_begin(){ 
	int value; 
	cin>>value;
	struct node *temp, *p;
	temp = create_node(value);
	if (start == NULL){
		start = temp; 
		start->next = NULL; 
		start->prev = NULL; 
	}
	else {
		p = start; 
		start = temp; 
		start->next = p; 
		p->prev = start;
	}
	cout<<endl;
}
// them vao cuoi
void double_linked_list::insert_last(){
	int value; 
    cin>>value;
	struct node *temp, *s; 
	temp = create_node(value);
	s = start;
	while (s->next != NULL){ 
	s = s->next;
	}
	temp->next = NULL; 
	s->next = temp; 
	temp->prev = s; 
	cout<<endl;
}
// duyet
void double_linked_list::Duyet(){
	struct node *temp;
	temp = start;
	while (temp != NULL) {
	cout<<temp->info<<" "; 
	temp = temp->next; 
	}
	cout<<endl;
}
int main(){
	double_linked_list X;
	start = NULL;
	int n,x;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		X.create_node(x);
	}
	X.insert_begin();
	X.insert_last();
	X.Duyet();
}

