#include<bits/stdc++.h>
using namespace std;
long long check(long long a,long long b){
	while(a*b!=0){
		long long r=a%b;
		a=b;
		b=r;
	} return a+b;
}
struct PhanSo{
	long long tu;
	long long mau;
};
void nhap(PhanSo &a){
	cin>>a.tu;
	cin>>a.mau;
}
void rutgon(PhanSo &a){
	long long b=a.tu;
	a.tu=(long long)a.tu/check(a.tu,a.mau);
	a.mau=(long long)a.mau/check(b,a.mau);
}
void in(PhanSo &a){
	cout<<a.tu<<"/"<<a.mau;
}
int main(){
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
