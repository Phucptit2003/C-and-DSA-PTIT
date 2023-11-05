#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n;
	cin>>n;
	long long dem=0,v=0;
	for(int i=2;i<=sqrt(n);i++){
		dem=0;
		while(n%i==0){
			dem++;
			n/=i;
			if(dem>3){
				v=1;
				break;
			}
		}
		if(v==1) break;
	}
	if(v==1) cout<<"YES\n";
	else cout<<"NO\n";
}

