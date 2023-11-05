#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string d1="101 A B B A D C C A B D C C A B D";
	string d2="102 A C C A B C D D B B C D D B B";
	cin.ignore();
	while(n--){
		string s;
		getline(cin,s);
		float tru=10.00;
		if(s[2]=='1'){
			for(int i=4;i<=32;i=i+2){
				if(s[i]==d1[i]||s[i]==d1[i]+32){
					continue;
				} else tru=tru-(float)2/3;
			}
		}
		if(s[2]=='2'){
			for(int i=4;i<=32;i=i+2){
				if(s[i]==d2[i]||s[i]==d2[i]+32){
					continue;
				} else tru=tru-(float)2/3;
			}
		}
		cout<<fixed<<setprecision(2)<<tru<<endl;
	}
}
