#include<bits/stdc++.h>

using namespace std;


int main(){
	int n;
	cin>>n;
	int a[n+1][n+1];
	vector<set<int>>v(n+1);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(a[i][j]==1){
				v[i].insert(j);
				v[j].insert(i);
			}
		}
	}
//	sort(v.begin(),v.end(),greater<int>());
	for(int i=1;i<=n;i++){
		for(auto j:v[i]) cout<<j<<" ";
		cout<<endl;
	}
}

