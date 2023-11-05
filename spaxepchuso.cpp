#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n];
		vector<int>v;
		for(int i=0;i<n;i++){
			cin>>a[i];
			v.push_back(a[i]);
		}
		sort(v.begin(),v.end());
		set<char>s;
		for(auto x:v){
			cout<<x<<endl;
//			s.insert(x);
		}
		
		for(auto x:s){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}

