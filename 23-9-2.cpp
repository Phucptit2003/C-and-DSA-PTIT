#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b,c,d,e,f;
   cin>>a>>b>>c>>d>>e>>f;
   long long p=a*e,q=b*d,r=c*d,s=a*f;
   if(p==q&&r!=s){
   	cout<<"VONGHIEM";
   	return 0;
   }
   if(p==q&&r==s){
   	cout<<"VOSONGHIEM";
   	return 0;
   }cout<<fixed<<setprecision(2);
   double x=(f*b-e*c)/(b*d-a*e);
   double y=(c-a*x)/b;
   
   cout<<x<<" "<<y;
   double l=1/3;
   cout<<l;
}

