#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



int main(){
int n,s;cin>>n>>s;
int a[n];
int minval=1e9;
for(int i=0;i<n;i++) {
cin>>a[i];
minval=min(minval,a[i]);
}

vector<int> dp(s+1,0);
dp[0]=1;
for(int i=0;i<n;i++){
	for(int j=s;j>=a[i];j--){
		if(dp[j-a[i]]){
			dp[j]=1;
			cout<<j<<" ";
		}
	}
}
cout<<endl;
if(minval>s){
     cout<<0;
}


for(int i=s;i>=minval;i--){
	if(dp[i]){
		cout<<i;
		break;
	}
}
}
