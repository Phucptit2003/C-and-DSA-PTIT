#include<bits/stdc++.h>
using namespace std;
long long check(int n){
	long long tich=1;
	for(int i=1;i<=n;i++){
		tich*=i;
	}
	return tich;
}
int main(){
  int n;
  cin>>n;
  long long sum=0;
  for(int i=1;i<=n;i++){
  	sum+=check(i);
  }
  cout<<sum;
}

