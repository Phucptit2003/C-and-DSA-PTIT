#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int x;
	cin>>x;
	bool check=false;
	for(int k=0;k<n;k++){
		if(a[k]==x){
			cout<<"YES\n";
			check=true;
			break;
		}
	}
	if(check==false)cout<<"NO\n";
}

