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
		vector<int>nho;
		int minx;
		for(int i=0;i<n-1;i++){
			minx=abs(a[i]-a[i+1]);
			for(int j=i+1;j<n;j++){
				if(abs(a[j]-a[i])<minx) minx=abs(a[j]-a[i]);
			}
			nho.push_back(minx);
		}
		int minxx=nho[0];
		for(int i=1;i<nho.size();i++){
			if(nho[i]<minxx) minxx=nho[i];
		}
		cout<<minxx<<endl;
	}
}

