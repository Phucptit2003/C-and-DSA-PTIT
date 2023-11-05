#include<bits/stdc++.h>

using namespace std;

string calc(string s){
	stack<char>st1,st2;
	s='+'+s;
	st2.push('+');
	for(int i=0;i<s.size();i++){
		if(isalpha(s[i])) st1.push(s[i]);
		else{
			if(s[i]=='+'||s[i]=='-'){
				if(st2.top()=='+') st1.push(s[i]);
				else {
					if(s[i]=='+'){
						st1.push('-');
					}
					else st1.push('+');
				}
			}
			if(s[i]=='(') st2.push(st1.top());
			else if(s[i]==')') st2.pop();
		}
	}
	string res="";
	while(st1.size()>1){
		res=st1.top()+res;
		st1.pop();
	}
	return res;
}

int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		cout<<calc(s)<<endl;
	}
}

