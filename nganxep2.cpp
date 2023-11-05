#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	string s;
	stack<int>st;
	int k=0;
	while(cin>>s){
		if(s=="PUSH"){
			int x;
			cin>>x;
			st.push(x);
		}
		else if(s=="POP"){
			if(!st.empty()){
				st.pop();
			}
		}
		else if(s=="PRINT"){
			if(!st.empty()){
				cout<<st.top()<<" ";
				cout<<endl;
			} else cout<<"NONE\n";
		}
		k++;
		if(k==n){
			break;
		}
	}
}

