#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string masv,name,lop,diem1,diem2,diem3;
};
void nhap(SinhVien &sv){
	cin>>sv.masv;
	scanf("\n");
	getline(cin,sv.name);
	cin>>sv.lop;
	cin>>sv.diem1>>sv.diem2>>sv.diem3;
}
bool check(SinhVien &a,SinhVien &b){
	return a.masv<b.masv;
}
void sap_xep(SinhVien *sv,int n){
	sort(sv,sv+n,check);
}
void in_ds(SinhVien *sv,int n){
	int stt=0;
	for(int i=0;i<n;i++){
		stt++;
		cout<<stt<<" "<<sv[i].masv<<" "<<sv[i].name<<" "<<sv[i].lop<<" "<<sv[i].diem1<<" "<<sv[i].diem2<<" "<<sv[i].diem3<<endl;
	}
}
int main(){
     int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}

