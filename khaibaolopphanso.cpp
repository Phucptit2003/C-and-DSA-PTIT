#include<bits/stdc++.h>
using namespace std;
class PhanSo{
	public:
		long long tu,mau;
		PhanSo(long long a=1323927,long long b=237931){
			tu=a;
			mau=b;
		}
		friend istream &operator>>(istream &input,PhanSo &ps){
			cin>>ps.tu;
			cin>>ps.mau;
			return input;
		}
		void rutgon(){
			long long k=__gcd(tu,mau);
			tu/=k;
			mau/=k;
		}
		friend ostream &operator<<(ostream &output,PhanSo ps){
			cout<<ps.tu<<"/"<<ps.mau;
			return output;
		}
};
int main(){
PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}

