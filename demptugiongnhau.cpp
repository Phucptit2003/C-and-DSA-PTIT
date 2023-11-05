#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n][n];
		multiset<int>ms;
		for(int i=0;i<n;i++){
			set<int>s;
			for(int j=0;j<n;j++){
				cin>>a[i][j];
				s.insert(a[i][j]);
			}
			for(int k:s){
				ms.insert(k);
			}
		}
		vector<int>v;
		for(int k:ms){
			v.push_back(k);
		}
		int dem=0;
		for(int i=0;i<v.size();i++){
			int count=1;
			while(v[i]==v[i+1]){
				count++;
				i++;
			}
			if(cout==n) dem++;
		}
		cout<<dem<<endl;
	}
}
