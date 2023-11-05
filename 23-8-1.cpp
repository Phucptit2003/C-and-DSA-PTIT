#include<bits/stdc++.h>
using namespace std;
int check(int n){
	int sum=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	} if(sum==n) return 1;
	else return 0;
}
int main(){
	int n;
	cin>>n;
	for(int i=1;i<n;i++){
		if(check(i)==1) cout<<i<<" ";
	}
}
