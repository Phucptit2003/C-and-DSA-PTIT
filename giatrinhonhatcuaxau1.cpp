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
		long long sum=0;
		char c;
		int maxn;
		map<char,int>mp;
		for(int i=0;i<s.size();i++){
			mp[s[i]]++;
		}
		if(k==0){
			for(auto x:mp){
				sum+=x.second*x.second;
			}
			cout<<sum<<endl;
			continue;
		}
		while(k--){
			maxn=0;
			for(auto x:mp){
				if(x.second>maxn){
					maxn=x.second;
					c=x.first;
				}
			}
			mp[c]--;
		}
		for(auto x:mp){
			sum+=x.second*x.second;
		}
		cout<<sum<<endl;
	}
}

