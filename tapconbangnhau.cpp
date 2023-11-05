#include<bits/stdc++.h>

using namespace std;
bool check;
int n,a[105],sum;
void Try(int m,int cnt=0){
	if(check) return;
	if(cnt==sum){
		check=true;
		return ;
	}
	if(cnt>sum) return;
	for(int j=m+1;j<=n;j++) Try(j+1,cnt+a[j]);
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n;
		 sum=0;
		 check=false;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		if(sum%2==1){
			cout<<"NO\n";
		}
		else {
			sum=sum/2;
			Try(1);
			if(check==true) cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
}

