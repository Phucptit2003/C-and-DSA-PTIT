#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int n,m;
		cin>>n>>m;
	    int a[n][m];
        memset(a,0,sizeof(a));
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		vector<int>v;
		int h1=0;
		int h2=n-1;
		int c1=0;
		int c2=m-1;
		while(h1<=h2&&c1<=c2){
			if(h1<=h2){
			for(int j=c1;j<=c2;j++){
				cout<<a[h1][j]<<" ";
			} }
			    h1++;
			if(c1<=c2){
			for(int j=h1;j<=h2;j++){
				cout<<a[j][c2]<<" ";
			} }
			    c2--;
			if(h1<=h2){
				for(int j=c2;j>=c1;j--)
				cout<<a[h2][j]<<" ";}
				h2--;
			
			if(c1<=c2){
				for(int j=h2;j>=h1;j--)
				cout<<a[j][c1]<<" ";}
				c1++;}			
		 cout<<endl;
	}
}
