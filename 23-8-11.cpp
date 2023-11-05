#include<bits/stdc++.h>
using namespace std;
struct MonHoc{
	string mamon;
	string tenmh;
	int sotc;
	float diemcc;
	float diemktra;
	float diemthi;
};
struct SinhVien{
	string masv;
	string hoten;
	string lop;
    MonHoc mhsv[50];
};
int main(){
	struct SinhVien sv[50];
	struct MonHoc mh[50];
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>sv[i].mhsv[i];
		cin>>sv[i].masv;
		cin.ignore();		
		getline(cin,sv[i].hoten);
		cin>>sv[i].lop;
	for(int j=0;j<sv[i].mhsv[k];j++){
		cin>>mh[j].mamon;
		cin.ignore();
		getline(cin,mh[j].tenmh);
		cin>>mh[j].sotc>>mh[j].diemcc>>mh[j].diemktra>>mh[j].diemthi;}
	}
}
