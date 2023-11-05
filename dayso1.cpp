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
//		for(auto x:v){
//			cout<<x<<" ";
//		}
		cout<<endl;
		while(n>0){
			cout<<"[";
			for(int i=0;i<v.size();i++){
				cout<<v[i];
				if(i==v.size()-1) cout<<"]";
				else cout<<" ";
			}
			cout<<endl;
			v.clear();
			for(int i=0;i<n-1;i++){
				int t=a[i]+a[i+1];
				v.push_back(t);
			}
			n--;
			for(int i=0;i<v.size();i++){
				a[i]=v[i];
			}
			
		} 
	}
}

