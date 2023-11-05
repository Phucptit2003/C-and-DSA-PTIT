#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string manv="00001";
	string name;
	string gt;
	string ngaysinh;
	string diachi;
	string mathue;
	string ngayki;
};
void nhap(NhanVien &nv){
	getline(cin,nv.name);
	cin>>nv.gt;
	cin>>nv.ngaysinh;
	cin.ignore();
	getline(cin,nv.diachi);
	cin>>nv.mathue;
	cin>>nv.ngayki;
}
void in(NhanVien nv){
	cout<<nv.manv<<" "<<nv.name<<" "<<nv.gt<<" "<<nv.ngaysinh<<" "<<nv.diachi<<" "<<nv.mathue<<" "<<nv.ngayki;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
