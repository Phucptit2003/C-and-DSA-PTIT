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
		vector<long long>L(n,-1e18);
		long long tich=1;
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
					tich=tich*a[j];
					L[i]=max(L[i],tich);
			}
			tich=1;
		}
		sort(L.begin(),L.end());
		cout<<L[L.size()-1]<<endl;
	}
}
