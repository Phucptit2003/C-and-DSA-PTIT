#include<iostream>
using namespace std;
bool check(int n){
	int dem=0;
	int c;
	for(int i=2;i*i<=n;i++){
		c=0;
		while(n%i==0){
			c++;
			n/=i;
		}
		if(c>1) return false;
		else if(c==1) dem++;}
		if(n!=1) dem++;
	if(dem==3) return true;
	else return false;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		if(check(n)) cout<<"1\n";
		else cout<<"0\n";
	}
}
