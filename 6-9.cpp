#include<bits/stdc++.h>
using namespace std;
int rutgon(int a,int b){
	 return __gcd(a,b);
}
class PhanSo{
	public:
		double tu,mau;
void nhap(){
	cin>>tu>>mau;
}
void in(){
	cout<<tu<<"/"<<mau<<endl;
	int a=tu;
	tu=tu/rutgon(tu,mau);
	mau=mau/rutgon(a,mau);
	cout<<tu<<"/"<<mau<<endl;
}
};
int main(){
  PhanSo a;
  a.nhap();
  a.in();
}

