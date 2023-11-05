#include<iostream>
#include<math.h>
using namespace std;
int check(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	} return 1;
}
int main(){
	int a,b;
	cin>>a>>b;
	int min=a,max=b;
	if(a>b){
		min=b;
		max=a;
	}
	for(int i=min;i<=max;i++){
		if(check(i)==1) cout<<i<<" ";
	}
}
