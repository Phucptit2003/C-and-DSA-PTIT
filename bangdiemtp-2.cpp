#include<bits/stdc++.h>
using namespace std;
int dem=0;
struct SinhVien{
    string stt;
	string masv,name,lop;
	double diem1,diem2,diem3;
};
void nhap(SinhVien &sv){
	cin>>sv.masv;
	scanf("\n");
	getline(cin,sv.name);
	cin>>sv.lop;
	cin>>sv.diem1>>sv.diem2>>sv.diem3;
}
bool check(SinhVien &a,SinhVien &b){
	return a.name<b.name;
}
void sap_xep(SinhVien sv[],int n){
	sort(sv,sv+n,check);
}
void in_ds(SinhVien sv[],int n){
	for(int i=0;i<n;i++){
		dem++;
		sv[i].stt=to_string(dem);
		cout<<fixed<<setprecision(1);
		cout<<sv[i].stt<<" "<<sv[i].masv<<" "<<sv[i].name<<" "<<sv[i].lop<<" ";
		cout<<sv[i].diem1<<" "<<sv[i].diem2<<" "<<sv[i].diem3<<endl;
	}
}
int main(){
     int n;
    cin >> n;
    struct SinhVien ds[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}
