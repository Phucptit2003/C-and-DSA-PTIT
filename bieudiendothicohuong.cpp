#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int v,e;
		cin>>v>>e;
		vector<set<int>>ve(v+1);
		int x,y;
		for(int i=0;i<e;i++){
			cin>>x>>y;
			ve[x].insert(y);
		}
		for(int i=1;i<=v;i++){
			cout<<i<<": ";
//			if(ve[i].empty()) continue;
			for(auto &j:ve[i]){
				cout<<j<<" ";
			}
			cout<<endl;
		}
	}
}

