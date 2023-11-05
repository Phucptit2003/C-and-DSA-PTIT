#include<bits/stdc++.h>
using namespace std;
void chuanhoa(string &s){
	for(int i=0;i<s.size();i++){
		s[i]=toupper(s[i]);
	}
}
//void tach(string &s){
//	stringstream ss(s);
//	vector<string>v;
//	string c;
//	while(ss>>c) v.push_back(c);
//	for(int i=0;i<v.size();i++){
//	    chuanhoa(v[i]);
//		if(i==v.size()-1) cout<<v[i];
//		else
//		cout<<v[i]<<" ";
//	}
//}
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
void in(SinhVien sv[],int n,string &t){
	
	cout<<"DANH SACH SINH VIEN NGANH "<<t;
	cout<<":"<<endl;
	for(int i=0;i<n;i++){
		if(sv[i].lop[0]=='E'&&(sv[i].masv[5]=='C'||sv[i].masv[5]=='A')) continue;
		if(sv[i].masv[5]==t[0])
		{
			cout<<sv[i].masv<<" "<<sv[i].name<<" "<<sv[i].lop<<" "<<sv[i].mail<<endl;
		}
    }
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
  cin.ignore();
  for(int i=0;i<t;i++){
     string nganh;
  	getline(cin,nganh);
  	chuanhoa(nganh);
  	in(sv,n,nganh);
  }
}


