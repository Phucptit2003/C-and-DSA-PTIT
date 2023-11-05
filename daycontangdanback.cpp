#include<bits/stdc++.h>

using namespace std;
int n,k;
long long ans=0;
int a[105];
void Try(int i,int cnt=0){
	for(int j=i+1;j<=n;j++){
		if(a[j]>a[i]){
			cnt++;
			if(cnt==k){
				ans++;
			}
			Try(j,cnt);
			cnt--;
		}
	}
}
int main(){
	cin>>n>>k;	
	for(int i=1;i<=n;i++) cin>>a[i];
	Try(0);
	cout<<ans<<endl;
}
