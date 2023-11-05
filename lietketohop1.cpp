#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	vector<int>se;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	se.push_back(a[0]);
	for(int i=1;i<n;i++){
		if(a[i]!=a[i-1]){
			se.push_back(a[i]);
		}
	}
	n=se.size()+1;
	while(1){
		for(int i=0;i<k;i++){
				cout<<se[i]<<" ";
		}	
		cout<<endl;		
		int i=k-1;
		while(se[i]>=n-k+i&&i>=0){
			i--;
		}
		if(i<0) break;
		se[i]=se[i]+1;
		for(int j=i+1;j<k;j++){
			se[j]=se[i]+j-i;
		}
	}
}

