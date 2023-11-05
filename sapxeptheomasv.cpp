#include<bits/stdc++.h>
using namespace std;
struct SinhVien{	
	string masv,hoten,email,lop;
};
 void nhap(SinhVien &a){
   	getline(cin>>ws,a.hoten);
   	getline(cin>>ws,a.lop);
   	getline(cin>>ws,a.email);
   }
void in(SinhVien a){
	cout<<a.masv<<" "<<a.hoten<<" "<<a.lop<<" "<<a.email<<endl;
}
bool check(SinhVien &a,SinhVien &b){
	return a.masv<b.masv;
}
int main(){
	SinhVien a[10001];
	vector<SinhVien>v;
	int d=0;
	while(getline(cin>>ws,a[d].masv)){
		nhap(a[d]);
		d++;
	}
	sort(a,a+d,check);
	for(int i=0;i<d;i++){
		in(a[i]);
	}
}
