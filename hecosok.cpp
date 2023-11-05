#include<bits/stdc++.h>

using namespace std;
int CV(string &s,int k){
	int tmp=0;
	for(auto &i:s){
		tmp=tmp*k+(i-'0');
	}
	return tmp;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		string a,b;
		int k;
		cin>>k>>a>>b;
		int tmp=CV(a,k)+CV(b,k);
		stack<int>st;
		while(tmp){
			st.push(tmp%k);
			tmp/=k;
		}
		while(!st.empty()){
			cout<<st.top();
			st.pop();
		}
		cout<<endl;
	}
}

