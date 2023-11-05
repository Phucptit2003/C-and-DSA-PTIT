#include<iostream>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		cin.ignore();
		string s;
		cin>>s;
		int dem=0;
		for(int i=0;i<s.size();i++){
			for(int j=i;j<s.size();j++){
				if(s[i]==s[j]) dem++;
			}
		}
		cout<<dem<<"\n";
	}
}
