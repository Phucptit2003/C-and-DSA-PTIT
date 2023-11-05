#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int k;
		cin>>k;
		string s;
		cin>>s;
		map<char,int>mp;
	//	int max=0;
		char str;
		for(int i=0;i<s.size();i++){
				mp[s[i]]++;
		}
		while(k--){
			int max=0;
			for(auto it:mp){
				if(it.second>max){
					max=it.second;
					str=it.first;
				}
			}
			mp[str]--;
		}
		long long tong=0;
		for(auto it:mp){
			tong+=(long long)it.second*it.second;
		}
		cout<<tong<<endl;
	}
}

