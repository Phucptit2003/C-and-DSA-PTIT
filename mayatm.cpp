#include<bits/stdc++.h>

using namespace std;
int n,s;
bool check;	
int a[35];
void Try(int i,int sum=0,int cnt=0){
	if(sum>s||check==true) return;
	if(sum==s){
		check=true;
		cout<<cnt<<endl;
		return;
	}
	for(int j=i;j<=n;j++){
		Try(j+1,sum+a[j],cnt+1);
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		check=false;
		cin>>n>>s;	
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a+1,a+n+1,greater<int>());
		Try(1);
		if(check==false) cout<<-1<<endl;
	}
}

