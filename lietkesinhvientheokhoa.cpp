#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string masv,name,lop,mail;
};
void nhap(SinhVien &sv){
	cin>>sv.masv;
	cin.ignore();
	getline(cin,sv.name);
	cin>>sv.lop;
	cin>>sv.mail;
}
void in(SinhVien sv[],int n,int t){
	cout<<"DANH SACH SINH VIEN KHOA "<<t<<":"<<endl;
	int c=t%100;
	int res=0;
	for(int i=0;i<n;i++){
		res=(sv[i].lop[1]-'0')*10+(sv[i].lop[2]-'0');
		if(res==c){
			cout<<sv[i].masv<<" "<<sv[i].name<<" "<<sv[i].lop<<" "<<sv[i].mail<<endl;
		}
	}
//	cout<<endl;
}
int main(){
  int n;
  cin>>n;
  SinhVien sv[n];
  for(int i=0;i<n;i++){
  	nhap(sv[i]);
  }
  int t;
  cin>>t;
  int year[t];
  for(int i=1;i<=t;i++){
  	cin>>year[i];
  }
  for(int i=1;i<=t;i++){
  in(sv,n,year[i]);
   }
}

