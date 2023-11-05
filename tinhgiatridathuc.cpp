#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;

int main(){
    int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(auto &x:a) cin>>x;
		reverse(a,a+n);
		long long lt=1,sum=0;
		for(int i=0;i<n;i++)
		{
			sum=sum+a[i]*lt;
			sum%=mod;
			lt*=x;
			lt%=mod;
		}
		cout<<sum<<endl;
	} 
    return 0;
}
