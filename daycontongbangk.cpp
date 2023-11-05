#include<bits/stdc++.h>

using namespace std;
int a[100],vs[100];
int n,k;
vector<int>v;
void Try(int m,int dem){
	if(m<n&&dem>k) return;
	if(m>=n) return;
	if(dem==k){
		for(int i=0;i<n;i++){
			if(vs[i]==1){
				cout<<a[i]<<" ";
			}
		}
		cout<<endl;
		return;
	}
	for(int i=0;i<n;i++){
		if(vs[i]==0){
				vs[i]=1;
				dem+=a[i];
				if(dem==k){
					cout<<1<<endl;
				}
				Try(m+1,dem);
				dem-=a[i];
				vs[i]=0;			
		}
	}
} 
int main(){
	int test;
	cin>>test;
	while(test--){
		
		cin>>n>>k;
		int dem=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			vs[i]=0;
		}
		sort(a,a+n);
		Try(0,dem);
	}
}

