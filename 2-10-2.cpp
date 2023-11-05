#include<bits/stdc++.h>
using namespace std;
int main(){
     int test;
     cin>>test;
     while(test--){
     	int n;
     	cin>>n;
     	int a[n];
		int nn=1e9;
     	for(int i=0;i<n;i++){
     		cin>>a[i];
     		nn=min(a[i],nn);
		 }
		int s=a[0]-nn;
		int dem=0;
		for(int i=1;i<n;i++){
			s=__gcd(s,a[i]-nn);
		}
		for(int i=1;i<=sqrt(s);i++){
			if(s%i==0){
				if(i!=s/i) dem+=2;
				else dem++;
			}
		}
		cout<<dem<<endl;
	 }
}

