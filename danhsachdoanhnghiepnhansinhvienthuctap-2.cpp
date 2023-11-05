#include<bits/stdc++.h>
using namespace std;
struct DanhSach{
	string ma,name;
	int soluong;
};
void nhap(DanhSach &ds){
	cin>>ds.ma;
	scanf("\n");
	getline(cin,ds.name);
	cin>>ds.soluong;
}
bool check(DanhSach &a,DanhSach &b){
	if(a.soluong==b.soluong) return a.ma<b.ma;
	else return a.soluong>b.soluong;
}
void in(DanhSach ds[],int n,int a,int b){
    sort(ds,ds+n,check);
	cout<<"DANH SACH DOANH NGHIEP NHAN TU "<<a<<" DEN "<<b<<" SINH VIEN:"<<endl;
	for(int i=0;i<n;i++){
		if(a<=ds[i].soluong&&ds[i].soluong<=b)
		cout<<ds[i].ma<<" "<<ds[i].name<<" "<<ds[i].soluong<<endl;
	}
}
int main(){ 
    int n;
    cin>>n;
    DanhSach ds[n];
    for(int i=0;i<n;i++){
    	nhap(ds[i]);
	}
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		in(ds,n,a,b);
	}

}

