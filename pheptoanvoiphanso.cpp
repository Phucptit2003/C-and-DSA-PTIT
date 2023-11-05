#include<bits/stdc++.h>
using namespace std;
long long ucln(long long a,long long b){
return __gcd(a,b);
}
class PhanSo{
	public:
	long long tu;
	long long mau;

};
void process(PhanSo a,PhanSo b){
	long long p=a.tu;
	long long q=a.mau;
	a.tu=a.tu*b.mau+b.tu*a.mau;
	a.mau=a.mau*b.mau;
    a.tu=a.tu*a.tu;
	a.mau=a.mau*a.mau;
	long long k=a.tu;
	long long t=a.mau;
	a.tu=a.tu/(ucln(a.tu,a.mau));
	a.mau=a.mau/(ucln(k,a.mau));
	cout<<a.tu<<"/"<<a.mau<<" ";
	long long x=p*b.tu*a.tu;
	long long y=q*b.mau*a.mau;
	a.tu=x/ucln(x,y);
	a.mau=y/(ucln(x,y));
	cout<<a.tu<<"/"<<a.mau<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		PhanSo A;
		PhanSo B;
		cin>>A.tu>>A.mau>>B.tu>>B.mau;
		process(A,B);
	}
}
