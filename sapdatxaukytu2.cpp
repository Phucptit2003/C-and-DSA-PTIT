#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int a[30]={0};
		for(auto &i:s){
			a[i-'A']++;
		}
		int maxn=0;
		for(int i=0;i<26;i++){
			maxn=max(maxn,a[i]);
		}
		int k=s.size()-(n-1)*(maxn-1);
		if(maxn<=k) cout<<1<<endl;
		else cout<<-1<<endl;
	}
}

