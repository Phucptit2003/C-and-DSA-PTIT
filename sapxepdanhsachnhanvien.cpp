#include<bits/stdc++.h>
using namespace std;
int dem=0;
struct NhanVien{
	string manv;
	string name,sex,date,address,thue,day;
	int ngay,thang,nam;
};
void nhap(NhanVien &nv){
	dem++;
	nv.manv=to_string(dem);
	while(nv.manv.size()<5) nv.manv="0"+nv.manv;
	cin.ignore();
	getline(cin,nv.name);
	cin>>nv.sex;
	cin>>nv.date;
	cin.ignore();
	getline(cin,nv.address);
	cin>>nv.thue;
	cin>>nv.day;
	nv.thang=(nv.date[0]-'0')*10+(nv.date[1]-'0');
  	nv.ngay=(nv.date[3]-'0')*10+(nv.date[4]-'0');
  	nv.nam=(nv.date[6]-'0')*1000+(nv.date[7]-'0')*100+(nv.date[8]-'0')*10+(nv.date[9]-'0');
}
bool xuly(NhanVien &a,NhanVien &b){
	if(a.nam==b.nam){
		if(a.thang==b.thang) return a.ngay<b.ngay;
		else return a.thang<b.thang;
	} else return a.nam<b.nam;
}
void sapxep(NhanVien nv[],int n){
	sort(nv,nv+n,xuly);
}
void inds(NhanVien nv[],int n){
	for(int i=0;i<n;i++){
		cout<<nv[i].manv<<" "<<nv[i].name<<" "<<nv[i].sex<<" "<<nv[i].date<<" "<<nv[i].address<<" "<<nv[i].thue<<" "<<nv[i].day<<endl;
		
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}

