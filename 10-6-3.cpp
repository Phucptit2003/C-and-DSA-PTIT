#include<bits/stdc++.h>

using namespace std;
int n,k;
int a[40],b[40],me[40];
void Sinh(){
	int m=k;
	while(a[m]==n-k+m){
		m--;
	}
	if(m==0) cout<<k<<endl;
	else {
		a[m]=a[m]+1;
		for(int i=m+1;i<=k;i++){
			a[i]=a[m]+i-m;
		}
		int dem=0;
		for(int j=1;j<=k;j++){
			if(me[a[j]]==0) dem++;
		}
		cout<<dem<<endl;
	}
}

int main(){
	int test;
	cin>>test;
	while(test--){		
		cin>>n>>k;		
		for(int i=1;i<=k;i++){
			cin>>a[i];
			b[i]=a[i];
			me[b[i]]=1;
		}
		Sinh();
		memset(me,0,sizeof(me));
	}
}

