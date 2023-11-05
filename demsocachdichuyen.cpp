#include<bits/stdc++.h>

using namespace std;
int n,k;
int a[10000][10000],b[10000][10000];
void Xuly(int i, int j, int tong,int k){
	if(i>=n||j>=n) return;
//	if(b[i][j]==0) return;
	tong+=a[i][j];
	b[i][j]=0;
	if(tong>k){
		tong-=a[i][j];
		b[i][j]=1;
	 return;
    }
	
	
	if(i==n-1&&b[i][j+1]==0){
		tong-=a[i][j];
		b[i][j+1]=1;
	//	b[i][j]=1;
		return;
	}
	if(j==n-1&&b[i+1][j]==0){
		tong-=a[i][j];
	//	b[i][j]=1;
		b[i+1][j]=1;
		return;
	}
	if(b[i][j+1]==1){
		cout<<"+j: "<<tong<<endl;
	Xuly(i,j+1,tong,k);
}    if(b[i][j+1]==0&&b[i+1][j]==1){
 
    	cout<<"+i: "<<tong<<endl;
	Xuly(i+1,j,tong,k);
}

	if(tong==k){
		cout<<"Hello"<<endl;
	}
}

int main(){
   int test;
   cin>>test;
   while(test--){
//   	int n,k;
   	cin>>n>>k;
   	memset(a,0,sizeof(a));
   	memset(b,0,sizeof(b));
//   	int a[n][n];
//   	int b[n][n];
   	for(int i=0;i<n;i++){
   		for(int j=0;j<n;j++){
   			cin>>a[i][j];
		   }
	   }
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			b[i][j]=1;
		}
	}
	   int tong=0;
	   Xuly(0,0,tong,k);
}
}

