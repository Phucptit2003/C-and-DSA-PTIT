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
bool check(SinhVien &a,SinhVien &b){
	if(a.lop==b.lop) return a.masv<b.masv;
    else  return a.lop<b.lop;
}

void sapxep(SinhVien sv[],int n){
	sort(sv,sv+n,check);
}
void in(SinhVien sv[],int n){
	for(int i=0;i<n;i++){
		cout<<sv[i].masv<<" "<<sv[i].name<<" "<<sv[i].lop<<" "<<sv[i].email<<endl;
	}
}
int main(){
   int n;
   cin>>n;
   struct SinhVien sv[n];
   for(int i=0;i<n;i++){
   	nhap(sv[i]);
   }
   sapxep(sv,n);
   in(sv,n);
}

