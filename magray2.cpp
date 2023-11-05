#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		string x,res;
		cin>>x;
		cout<<x[0];
		int tmp=x[0]-'0',s;
		for(int i=1;i<x.size();i++){
			s=x[i]-'0';
			if(s!=tmp){
				tmp=1;
				cout<<tmp;
			}
			else{
				tmp=0;
				cout<<tmp;
			}
		}
		cout<<endl;
	}
}

