#include<bits/stdc++.h>

using namespace std;
void Nhiphan(int n){
	stack<int>st;
	while(n>0){
		int tmp=n%2;
		n/=2;
		st.push(tmp);
	}
	while(!st.empty()){
		cout<<st.top();
		st.pop();
	}
	cout<<" ";
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		for(int i=1;i<=n;i++){
			Nhiphan(i);
		}
		cout<<endl;
	}
}

