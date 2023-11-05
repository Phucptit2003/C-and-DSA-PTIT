#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  long long tich=1;
  long long tich1=1;
  long kq;
  for(int i=n-k+1;i<=n;i++){
  	tich*=i;
  }
  for(int i=1;i<=k;i++){
  	tich1*=i;
  }
  kq=tich/tich1;
  cout<<kq;
}

