#include<bits/stdc++.h>
using namespace std;
int i=1;
int sum=0;
int main(){
   int n;
   cin>>n;
   int a;
   cin>>a;
   cout<<n%a<<endl;
   while(n-i*a>a) i++;
   if(n-i*a==a) cout<<0;
   else 
   cout<<n-i*a;
}

