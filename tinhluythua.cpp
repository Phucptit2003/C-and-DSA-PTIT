#include<bits/stdc++.h>
using namespace std;
int P=1e9+7;

long long Pow(long long a,long long b){
	if(b==0) return 1;
	long long tmp=Pow(a,b/2);
	tmp=(tmp*tmp)%P;
	if(b%2==1) return a*tmp%P;
	else return tmp;
}
int main(){
	while(1){
		long long a,b;
		cin>>a>>b;
		if(a==0&&b==0) return 0;
		cout<<Pow(a,b)<<endl;
	}
}
