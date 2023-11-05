#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int v,e;
		cin>>v>>e;
		int degree[1005]={};
		for(int i=1;i<=e;i++){
			int x,y;
			cin>>x>>y;
			degree[x]++;
			degree[y]++;
		}
		int dem=0;
		for(int i=1;i<=v;i++){
			dem+=degree[i]&1;
		}
		if(!dem) cout<<2<<endl;
		else if(dem==2) cout<<1<<endl;
		else cout<<0<<endl;
	}
}

