#include<bits/stdc++.h>

using namespace std;
int n,k;
long long mod=1e9+7;
struct matrix{
	long long a[20][20];
	matrix operator* (matrix b){
		matrix res,c=*this;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				res.a[i][j]=0;
				for(int k=0;k<n;k++){
					res.a[i][j]+=(b.a[i][k]*c.a[k][j])%mod;
					res.a[i][j]%=mod;
				}
			}
		}
		return res;
	}
};
matrix Try(matrix a,int k){
	if(k==1) return a;
	matrix res=Try(a,k/2);
	res=res*res;
	if(k%2==1) res=res*a;
	return res;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n>>k;
		matrix d,res;
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin>>d.a[i][j];
		res=Try(d,k);
		long long ans=0;
		for(int i=0;i<n;i++){
			ans=(ans+res.a[i][n-1])%mod;
		}
		cout<<ans<<endl;		
	}
}

