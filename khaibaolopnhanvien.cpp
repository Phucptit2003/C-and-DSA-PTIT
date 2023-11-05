#include<bits/stdc++.h>
using namespace std;
class NhanVien{
	public:
	string manv="00001";
	string name;
	string gt;
	string ngaysinh;
	string diachi;
	string mathue;
	string ngayki;

 void nhap(){
	getline(cin,name);
	cin>>gt;
	cin>>ngaysinh;
	cin.ignore();
	getline(cin,diachi);
	cin>>mathue;
	cin>>ngayki;}
 void xuat(){
	cout<<manv<<" "<<name<<" "<<gt<<" "<<ngaysinh<<" "<<diachi<<" "<<mathue<<" "<<ngayki;
}
};
int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}
