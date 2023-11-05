#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		vector<int>L(n,1);
		for(int i=0;i<n;i++){
			for(int j=0;j<i;j++){
				if(a[i]>a[j])
					L[i]=max(L[i],L[j]+1);
			}
		}
		sort(L.begin(),L.end());
		cout<<L[L.size()-1]<<endl;
	}
}

