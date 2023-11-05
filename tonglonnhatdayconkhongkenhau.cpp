#include<bits/stdc++.h>
using namespace std;
int main(){
      int test;
      cin>>test;
      while(test--){
      	int n;
      	cin>>n;
      	long long a[n+1];
      	long long vs[n+1]={0};
      	for(int i=1;i<=n;i++){
      		cin>>a[i];
	    }
	    vs[1]=a[1];
	    vs[2]=max(a[1],a[2]);
	    for(int i=3;i<=n;i++){
	    	vs[i]=max(vs[i-1],a[i]+vs[i-2]);
		}
		cout<<vs[n]<<endl;
		memset(vs,0,sizeof(vs));
	}
}

