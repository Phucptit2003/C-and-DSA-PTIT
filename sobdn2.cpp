#include<bits/stdc++.h>

using namespace std;
long long n;
bool check(string s){
	long long tmp=0;
	for(auto &i:s){
		tmp=tmp*10+i-'0';
		tmp%=n;
	}
	return !tmp;
}
string find(){
	queue<string>qe;
	string s;
	qe.push("1");
	while(qe.size()){
		s=qe.front();
		qe.pop();
		if(check(s)) return s;
		qe.push(s+"0");
		qe.push(s+"1");
	}
	return "";
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n;
		cout<<find()<<endl;
	}
}

