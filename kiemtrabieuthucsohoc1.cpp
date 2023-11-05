#include<bits/stdc++.h>

using namespace std;

string Try(string s){
	stack<int>st;
	bool check;
	char cur;
	for(auto &i:s){
		if(i==')'){
			check=0;
			cur=st.top();
			st.pop();
			while(cur!='('){
				if(cur=='+'||cur=='-'||cur=='*'||cur=='/') check=1;
				cur=st.top();
				st.pop();
			}
			if(check==0) return "Yes";
		}
		else st.push(i);
	}
	return "No";
}
int main(){
	int test;
	cin>>test;	
	while(test--){
		scanf("\n");
		string s;
		getline(cin,s);
		cout<<Try(s)<<endl;
	}
}

