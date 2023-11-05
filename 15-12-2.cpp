#include<bits/stdc++.h>

using namespace std;
int dem=0;
struct NhanVien{
	string manv,name,gt,date,address,mathue,ngayki;	
};
void nhap(NhanVien &nv){
	dem++;
	scanf("\n");
	getline(cin,nv.name);
	cin>>nv.gt;
	cin>>nv.date;
	scanf("\n");
	getline(cin,nv.address);
	cin>>nv.mathue;
	cin>>nv.ngayki;
	nv.manv=to_string(dem);
	while(nv.manv.size()<5) nv.manv='0'+nv.manv;
}
void In(NhanVien nv[],int n){
	for(int i=0;i<n;i++){
		cout<<nv[i].manv<<" "<<nv[i].name<<" "<<nv[i].gt<<" "<<nv[i].date<<" "<<nv[i].address<<" "<<nv[i].mathue<<" "<<nv[i].ngayki<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	NhanVien nv[n];
	for(int i=0;i<n;i++){
		nhap(nv[i]);
	}
	In(nv,n);
}

