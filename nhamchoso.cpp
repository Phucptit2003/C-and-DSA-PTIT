#include<bits/stdc++.h>

using namespace std;
long long converttomin(int a){
	int res=0;int i=0;
	while(a){
		if(a%10==6) res+=5*pow(10,i++);
		else res+=a%10*pow(10,i++);
		a/=10;
	}
	return res;
}
long long converttomax(int a){
	int res=0; int i=0;
	while(a){
		if(a%10==5) res+=6*pow(10,i++);
		else res+=a%10*pow(10,i++);
		a/=10;
	}
	return res;
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<converttomin(a)+converttomin(b)<<" "<<converttomax(a)+converttomax(b)<<endl;
}

