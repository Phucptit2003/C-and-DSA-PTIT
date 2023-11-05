#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n];
		map<int,int>mp;
		for(int i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
		}
		int check=0;
		for(int i=0;i<n;i++){
			if(mp[a[i]]>n/2) {
				cout<<a[i]<<endl;
				check=1;
				break;
			}
		}
		if(check==0) cout<<"NO\n";
	}
}

