#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int b[n+1];
    for(int i=0;i<=n;i++){
        b[i]=0;
    }
    b[0]=1;
    b[1]=1;
    for(int i=2;i<=sqrt(n);i++){
        if(b[i]==0){
            for(int j=i*i;j<=n;j+=i){
                b[j]=1;
            }
        }
    }
    int check=1;
    for(int i=0;i<=n;i++){
        if(b[i]==0){
        	int t=i;
	        	while(t>10){
	        		t=t/10;
	        		if(b[t]==1){
	        			check=0;
	        			break;
					} else check=1;
			}
			if(check==1) cout<<i<<" ";
       }
    }
}
