#include<bits/stdc++.h>

using namespace std;
int check(int n){
	string s=to_string(n);
	for(int i=s.size()-2;i>=0;i--){
		if(s[s.size()-1]<s[i]){
			return 0;
		}
	}
	return 1;
}
int main(){
	int n;
	cin>>n;
	int dem=0;
	int a[n+1];
	a[0]=0;
	a[1]=0;
	for(int i=2;i<n;i++){
		a[i]=1;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(a[i])
			for(int j=i*i;j<=n;j+=i){
				a[j]=0;
			}
	}
	for(int i=0;i<n;i++){
		if(a[i]==1){
			if(check(i)==1){
				cout<<i<<" ";
				dem++;
			}
		}
	}
	cout<<endl<<dem;
}

