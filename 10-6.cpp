#include<bits/stdc++.h>

using namespace std;
int n,k,a[20];
vector<char>v;
void QL(int i){
	if(i>=k){
		for(int j=0;j<k;j++){
			cout<<v[a[j]-1];
		}
		cout<<endl;
		return;
	}
	for(int j=a[i-1]+1;j<=n-k+i+1;j++){
		a[i]=j;
		QL(j);
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){		
		cin>>n>>k;		
		for(int i=1;i<=n;i++){
			v.push_back(char(i+64));
			a[i]=i;
		}
		QL(0);
		v.clear();
	}
}

