#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n,m,k;
		cin>>n>>m>>k;
		int a[n],b[m],c[k];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int j=0;j<m;j++) cin>>b[j];
		for(int i=0;i<k;i++) cin>>c[i];
		int x=0,y=0,z=0;
		int check=0;
		while(x<n&&y<m&&z<k){
			if(a[x]==b[y]&&a[x]==c[z]){
				check=1;
				cout<<a[x]<<" ";
			}
			if(a[x]<b[y]) x++;
			else if(b[y]<c[z]) y++;
			else z++;
		}
		if(check==0) cout<<"-1";
		cout<<endl;
	}
}

