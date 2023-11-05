#include<bits/stdc++.h>
using namespace std;
long long check(long long a,long long b){
	while(b!=0){
		long long tmp=a%b;
		a=b;
		b=tmp;
	}  return a+b;
}
struct PhanSo{
	long long tu;
	long long mau;
};
void rutgon(PhanSo &p){
	long long d=check(p.tu,p.mau);
	p.tu=p.tu/d;
	p.mau=p.mau/d;
}
void nhap(PhanSo &p){
	cin>>p.tu;
	cin>>p.mau;
}
PhanSo tong(PhanSo p,PhanSo q){
	p.tu=p.tu*q.mau+p.mau*q.tu;
	p.mau=p.mau*q.mau;
	rutgon(p);
	return p;
}
void in(PhanSo p){
	cout<<p.tu<<"/"<<p.mau;
}
int main(){
	struct PhanSo p,q;
	nhap(p);
	nhap(q);
	PhanSo t= tong(p,q);
	in(t);
	return 0;
}
