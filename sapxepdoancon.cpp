#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		vector<int>v;
		long long maxn[n];
		maxn[0]=a[0];
		long long minn[n];
		minn[n-1]=a[n-1];
		for(int i=1;i<n;i++){
			maxn[i]=max(a[i],maxn[i-1]);
		}
		for(int j=n-2;j>=0;j--){
			minn[j]=min(a[j],minn[j+1]);
		}
		for(int i=0;i<n-1;i++){
			if(maxn[i]<=minn[i+1]) v.push_back(i+1);
		}
		if(v.size()==0) cout<<0<<endl<<endl;
		else{
			cout<<v.size()<<endl;
			for(int i:v){
				cout<<i<<" ";
			}
			cout<<endl;
		}
	}
}

