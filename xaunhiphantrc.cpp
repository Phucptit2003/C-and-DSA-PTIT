#include<bits/stdc++.h>

using namespace std;
void Xuly(string s){
	int i=s.size()-1;
	while(s[i]-'0'==0&&i>0)i--;
	if(i==0){
		for(int i=0;i<s.size();i++) s[i]=1+'0';
		cout<<s<<endl;
		return;
	} else s[i]=0+'0';
	for(int j=i+1;j<s.size();j++){
		s[j]=1+'0';
	}
	cout<<s<<endl;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		Xuly(s);
	}
}

