#include<bits/stdc++.h>

using namespace std;
int n,k;
int a[25];
int check,sum;
void Try(int cnt=0,int cur=0){
	if(check) return;
	if(cnt==k){
		check=1;
		return;
	}
	for(int j=0;j<n;j++){
		if(cur==sum) Try(cnt+1);
		else{
			if(cur>sum) return;
			Try(cnt,cur+a[j]);
		}
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){	
		cin>>n>>k;
		sum=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		if(sum%k!=0){
			cout<<0<<endl;
			continue;
		}
		sum/=k;
		check=0;
		Try();
		cout<<check<<endl;
	}
}

