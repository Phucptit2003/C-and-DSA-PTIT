#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string masv,name,lop,email;
};
void nhap(SinhVien &sv){
	cin>>sv.masv;
	cin.ignore();
	getline(cin,sv.name);
	cin>>sv.lop;
	cin>>sv.email;
}
void in(SinhVien sv[],int n,string p){
	cout<<"DANH SACH SINH VIEN LOP "<<p<<":"<<endl;
	for(int i=0;i<n;i++){
		if(sv[i].lop==p){
			cout<<sv[i].masv<<" "<<sv[i].name<<" "<<sv[i].lop<<" "<<sv[i].email<<endl;
		}
	}
}
int main(){
    int n;
    cin>>n;
    struct SinhVien sv[n];
    for(int i=0;i<n;i++){
    	nhap(sv[i]);
	}
	int t;
	cin>>t;
	string s;
	cin.ignore();
	while(t--){
		getline(cin,s);
		in(sv,n,s);
	}
}

