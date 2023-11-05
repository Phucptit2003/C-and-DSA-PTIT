#include<bits/stdc++.h>
using namespace std;
void chuanhoa(char &c){
	if(c>='a'&&c<='z'){
		c=c-32;
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		stringstream ss(s);
		vector<char>v;
		char c;
		while(ss>>c) v.push_back(c);
		int a[10000];
		int k=0;
		int check=1;
		for(int i=0;i<v.size();i++){
			chuanhoa(v[i]);}
		for(int i=0;i<v.size();i++){
			if(v[i]>='A'&&v[i]<='C'){
				a[k]=2;
				k++;
			}
			if(v[i]>='D'&&v[i]<='F'){
				a[k]=3;
				k++;
			}
			if(v[i]>='G'&&v[i]<='I'){
				a[k]=4;
				k++;
			}
			if(v[i]>='J'&&v[i]<='L'){
				a[k]=5;
				k++;
			}
			if(v[i]>='M'&&v[i]<='O'){
				a[k]=6;
				k++;
			}
			if(v[i]>='P'&&v[i]<='S'){
				a[k]=7;
				k++;
			}
			if(v[i]>='T'&&v[i]<='V'){
				a[k]=8;
				k++;
			}
			if(v[i]>='W'&&v[i]<='Z'){
				a[k]=9;
				k++;
			}
		}
		for(int i=0;i<=k/2;i++){
					if(a[i]!=a[k-1-i]){
						cout<<"NO\n";
						check=0;
						break;
					}
		}
		if(check==1) cout<<"YES\n";
	}
}
