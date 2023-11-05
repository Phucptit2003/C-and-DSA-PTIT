#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b,b+n);
		vector<int>v;
		int check=0,check1=0;
		for(int i=0;i<n;i++){
			if(a[i]!=b[i]){
				v.push_back(i+1);
			}
		}
		cout<<v[0]<<" "<<v[v.size()-1]<<endl;
	}
}

