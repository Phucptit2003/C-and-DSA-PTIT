#include<bits/stdc++.h>
using namespace std;
bool check(int a,int b){
	return a>b;
}
int main(){
   int n,c;
   cin>>n>>c;
   int a[n];
   long long tong=0;
   for(int i=0;i<n;i++){
   cin>>a[i];
   }
   sort(a,a+n,check);
   for(int i=0;i<n;i++){
   	  tong+=a[i];
   	  if(tong>c) {
		 tong=tong-a[i];
		 break;}
   }
   cout<<tong;
}    

