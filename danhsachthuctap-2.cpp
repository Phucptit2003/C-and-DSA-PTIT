#include<bits/stdc++.h>
using namespace std;
int stt;
struct SinhVien{
	int dem;
	string masv,name,lop,email,dn;
};
bool check(SinhVien &a,SinhVien &b){
	return a.masv<b.masv;
}
void nhap(SinhVien &sv){
	stt++;
	sv.dem=stt;
	cin>>sv.masv;
	scanf("\n");
	getline(cin,sv.name);
	cin>>sv.lop;
	cin>>sv.email;
	cin>>sv.dn;
}
void in(SinhVien sv[],int n,string p){
	for(int i=0;i<n;i++){
		if(sv[i].dn==p){
		cout<<sv[i].dem<<" "<<sv[i].masv<<" "<<sv[i].name<<" "<<sv[i].lop<<" "<<sv[i].email<<" "<<sv[i].dn<<endl;
	}}
}
int main(){
   int n; int t;
   cin>>n;
   SinhVien ds[n];
   for(int i=0;i<n;i++){
     nhap(ds[i]);}
  sort(ds,ds+n,check);
   cin>>t;
   string x;
   cin.ignore();
   for(int i=0;i<t;i++){
   	 getline(cin,x);
   	 for(int i=0;i<x.size();i++){
   	 	if(x[i]>='a'&&x[i]<='z') x[i]-=32;
		}
	in(ds,n,x);
   }
}

