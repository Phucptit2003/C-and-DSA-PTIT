#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	
	while(test--){
	cin.ignore();
		string s;
		getline(cin,s);
		int dem=0;
		for(int i=0;i<s.length();i++){
			if(s[i]==' '||s[i]=='\t'||s[i]=='\n')
			if(s[i+1]!='\n'&&s[i+1]!='\t'&&s[i+1]!=' ') dem++;
	} cout<<dem+1<<"\n";
	}
}
