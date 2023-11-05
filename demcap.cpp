#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int j=0;j<m;j++) cin>>b[j];
		int dem=0;
		for(int i=0;i<n;i++){
			if(a[i]==0) dem=dem;
			else if(a[i]==1){
				for(int j=0;j<m;j++){
					if(b[j]==0) dem++;
				}
			}else {
				for(int j=0;j<m;j++){
					if(b[j]*log(a[i])>a[i]*log(b[j])) dem++;
				}
			}
		}
		cout<<dem<<endl;
	}
}

