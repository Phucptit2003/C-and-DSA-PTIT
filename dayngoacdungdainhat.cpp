#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		stack<int>st;
		st.push(-1);
		int res=-1;
		for(int i=0;i<s.size();i++){
			if(s[i]=='('){
				st.push(i);
			}
			else{
				st.pop();
				if(st.empty()) st.push(i);
				else res=max(res,i-st.top());
			}
		}
		cout<<res<<endl;
	}
}

