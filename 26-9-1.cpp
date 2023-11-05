#include<bits/stdc++.h>
using namespace std;
int main(){
   long long l,r;
   cin>>l>>r;
   long long dem=0;
   for(long long i=l;i<=r;i++){
   	  if(sqrt(i)==(long long)sqrt(i)){
		  dem++;
		  cout<<i<<endl;}
   }
   cout<<dem;
}

