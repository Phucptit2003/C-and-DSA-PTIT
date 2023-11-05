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
void in(DanhSach ds[],int n){
	sort(ds,ds+n,check);
	for(int i=0;i<n;i++){
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
	in(ds,n);
}

