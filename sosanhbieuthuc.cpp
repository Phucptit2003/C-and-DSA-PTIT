#include<bits/stdc++.h>

using namespace std;

string check(string s){
	stack<char>st1,st2;
	s='+' + s;
	st2.push('+');
	for(int i=0;i<s.size();i++){
		if(isalpha(s[i])){
			st1.push(s[i]);
		}
		else{
			if(s[i]=='+'||s[i]=='-'){
				if(st2.top()=='+') st1.push(s[i]);
				else{
					if(s[i]=='+'){
						st1.push('-');
					}
					else st1.push('+');
				}
			}
			if(s[i]=='(') st2.push(st1.top());
			else if(i==')') st2.pop();
		}
	}
	string res="";
	while(!st1.empty()){
		res=st1.top()+res;
		st1.pop();
	}
	return res;
}

int main(){
	int test;
	cin>>test;
	while(test--){
		string s1,s2;
		cin>>s1>>s2;
		if(check(s1)==check(s2)){
			cout<<"YES\n";
		}
		else cout<<"NO\n";
	}
}

