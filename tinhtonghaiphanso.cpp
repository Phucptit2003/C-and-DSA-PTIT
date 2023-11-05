#include<bits/stdc++.h>
using namespace std;
long long check(long long a,long long b){
	while(b!=0){
		int r=a%b;
		a=b;
		b=r;
	}
    return a+b;
}
int main(){
	long long p1,p2,q1,q2;
	cin >>p1>>p2>>q1>>q2;
	int dem1=p1,dem2=q1;
	p1=p1/check(p1,p2);
	p2=p2/check(dem1,p2);
	q1=q1/check(q1,q2);
	q2=q2/check(dem2,q2);
	long long tu=p1*q2+p2*q1;
	long long mau=p2*q2;
	tu=tu/check(tu,mau);
	mau=mau/check(tu,mau);
	cout<<tu<<"/"<<mau;
}
