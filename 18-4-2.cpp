#include <bits/stdc++.h>

using namespace std;

// stack
int MAX = 100;

struct stack{
	int top;
	int node[MAX];
};
// Kieemr tra rong
int empty(stack *s){
	if(stack -> top == -1){
		return 1;
	}
	else{
		return 0;
	}
}
// Kiem tra tinh day stack
int Full(stack *s){
	if(stack -> top == MAX - 1){
		return 1;
	}
	else{
		return 0;
	}
}
// Dua du lieu vao stack

void push(stack *s, int x){
	if(!Full(s)){
		s -> top = (s -> top) + 1;
		node[s -> top] = x;
	}
	else{
		cout << "Tran Stack!\n";
	}
}

// lay du lieu ra khoi stack

int pop(stack *s){
	if(!empty(s)){
		x = node[s -> top];
		s -> top = (s -> top) - 1;
		return x;
	}
	else{
		cout << "Stack rong!\n";
	}
	return;
}
int main()
{
    int n,x;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        st.push(x);
    }
    cout<<empty(s)<<endl;
    cout<<FULL(s)<<endl;
    push(s,x);
    cout<<pop(s)<<endl;
}
