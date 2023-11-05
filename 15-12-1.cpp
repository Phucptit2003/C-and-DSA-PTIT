#include<bits/stdc++.h>

using namespace std;
int Check(int a,int b,int c){
	if(a+b<=c) return 0;
	if(a+c<=b) return 0;
	if(b+c<=a) return 0;
	return 1;
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int check=1;
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n;j+=2){
			if(Check(a[i],a[j],a[j+1])==0){
				check=0;
				break;
			}
		}
		if(check==0) break;
	}
	if(check==0) cout<<"YES\n";
	else cout<<"NO\n";
}

