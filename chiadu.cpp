#include<iostream>
using namespace std;
int check(int a,int b){
	for(int i=0;i<b;i++){
		if((a*i)%b==1){
			return i;
		}
	} return -1;
}
int main(){
	int test;
	cin>>test;
	while(test--){
	int a,b;
	cin>>a>>b;
	cout<<check(a,b)<<endl;}
}
