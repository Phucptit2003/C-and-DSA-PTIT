#include<iostream>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		cin.ignore();
		string s;
		cin>>s;
		int dem=1;
		int len=s.length();
		for(int i=0;i<len;i++){
		    if(s[i]==s[i+1]) dem++;
		else { 
		 cout<<s[i]<<dem;
		 dem=1;}}
		 cout<<"\n";
	}
}
