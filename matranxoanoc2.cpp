#include<bits/stdc++.h>
using namespace std;
int main(){
  int test;
  cin>>test;
  while(test--){
  	int n,m;
  	cin>>n>>m;
  	int a[n][m];
  	for(int i=1;i<=n;i++){
  		for(int j=1;j<=m;j++){
  			cin>>a[i][j];
		}
	}
	int h1=1;
	int c1=1;
	int h2=n;
	int c2=m;
	vector<int>v;
//     int b[100000]={0};
 //   memset(b,0,sizeof(b));
//    memset(b,0,sizeof(b));
//    int k=0;
    while(h1<=h2&&c1<=c2){
    		for(int j=c1;j<=c2;j++){
    			v.push_back(a[h1][j]);
			}
			h1++;				 
			for(int j=h1;j<=h2;j++){
		        v.push_back(a[j][c2]);
		}
			c2--;
	
		if(h1<=h2){
			for(int j=c2;j>=c1;j--){
				v.push_back(a[h2][j]);
			}}
		    h2--;
	    
		if(c2>=c1){
			for(int j=h2;j>=h1;j--){
			     v.push_back(a[j][c1]);
			}}
			c1++;
	    
	}
	reverse(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;

  }
}

