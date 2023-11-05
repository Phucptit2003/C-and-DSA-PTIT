#include<bits/stdc++.h>
using namespace std;
int check(long long n){
	if(n<2) return 0;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			return 1;
		}
	}
	return 0;
}
int check2(long long n){
	int sum=0;
	while(n>0){
		sum+=n%10;
		n/=10;
	}	return sum;
}
int check1(long long n){
	int i=2;
	int sum=0;
	for(int i=2;i<=n;i++){
		while(n%i==0){
			sum+=check2(i);
			n/=i;
		}
	} 
	return sum;
}


int main(){
      int test;
      cin>>test;
      while(test--){
      	long long n;
      	cin>>n;
//      	cout<<check(n)<<" "<<check1(n)<<" "<<check2(n)<<endl;
      	if(check(n)==1){
      		if(check1(n)==check2(n)){
      			cout<<"YES\n";
			  } else cout<<"NO\n";
		  } else cout<<"NO\n";
	  }
}

