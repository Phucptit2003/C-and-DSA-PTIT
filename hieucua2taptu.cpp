#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	cin.ignore();
	while(test--){	
		string s1;
		getline(cin,s1);
		string s2;
		getline(cin,s2);
		set<string>v1;
		set<string>v2;
		stringstream ss1(s1);
		stringstream ss2(s2);
		string c1;
		string c2;
		while(ss1>>c1) v1.insert(c1);
		while(ss2>>c2) v2.insert(c2);
		for(string i:v1){
			if(v2.find(i)==v2.end()){
				cout<<i<<" ";
			}
		}
		cout<<endl;
	}
}
