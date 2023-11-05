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
		int len=s.size();
		char maxn;
		int cnt=0,vt;
		for(int i=0;i<len;i++){
			maxn=s[len-1];
			vt=len-1;
			for(int j=len-1;j>i&&k>0;j--){
				if(s[j]>maxn){
					maxn=s[j];
					vt=j;
				}
			}
			if(maxn>s[i]&&k>0){
				swap(s[i],s[vt]);
				k--;
			}
		}
		cout<<s<<endl;
	}
}

