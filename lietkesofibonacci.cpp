#include<iostream>
using namespace std;
int fibonacci(int n){
	int f[10000];
	 f[0]=0;
	 f[1]=1;
	 f[n]=1;
	if(n<0) return -1;
	else if(n==0||n==1) return n;
	else {
	for(int i=2;i<n;i++){
		f[0]=f[1];
		f[1]=f[n];
		f[n]=f[0]+f[1];
		}
		}
		return f[n];
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<fibonacci(i)<<" ";
	}
}
