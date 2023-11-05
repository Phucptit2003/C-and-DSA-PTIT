#include<bits/stdc++.h>
using namespace std;
int check(long long n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
   int test;
   cin>>test;
   while(test--){
   	long long a,b;
   	cin>>a>>b;
   	long long dem=0;
   	for(int i=sqrt(a);i<=sqrt(b);i++){
  // 		if((i)==(int)(i))
   		if(check(i)==1) dem++;
	   }
	   cout<<dem<<endl;
   }
}

