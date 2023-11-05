#include<bits/stdc++.h>
using namespace std;
void check(int x[],int n){
	for(int i=1;i<=n;i++) cin>>x[i];
	while(1){
		for(int i=1;i<=n;i++){
			cout<<x[i]<<" ";
		}
		cout<<endl;
		int i=n;
		while(i>0&&x[i]==1){
			x[i]=0;
			i--;
		}
	   if(i==0) return;
	   else x[i]=1;
	}
}
int main(){
     int n;
     cin>>n;
     int a[n];
     check(a,n);
}

