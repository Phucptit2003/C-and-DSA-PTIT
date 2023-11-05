#include<bits/stdc++.h>
using namespace std;
struct ThiSinh{
	string s;
	string ngaysinh;
	float diem1;
	float diem2;
	float diem3;
};
void nhap(ThiSinh &a){
	getline(cin,a.s);
//	cin.ignore();
	getline(cin,a.ngaysinh);
	cin>>a.diem1;
	cin>>a.diem2;
	cin>>a.diem3;
}
void in(ThiSinh &a){
	cout<<a.s<<" "<<a.ngaysinh<<" "<<fixed<<setprecision(1)<<(float)a.diem1+a.diem2+a.diem3;
}
int main(){
	struct ThiSinh A;
	nhap(A);
	in(A);
	return 0;
}
