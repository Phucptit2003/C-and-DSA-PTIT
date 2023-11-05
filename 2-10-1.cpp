#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string masv,name,lop,email;
};
void nhap(SinhVien &a){
	getline(cin>>ws,a.name);
	getline(cin>>ws,a.lop);
	getline(cin>>ws,a.email);
}
void in(SinhVien sv){
   cout<<sv.masv<<" "<<sv.name<<" "<<sv.lop<<" "<<sv.email<<endl;	
}
bool cmp(SinhVien &a,SinhVien &b){
	return a.masv<b.masv;
}
int main(){
    SinhVien sv[10001];
    vector<SinhVien>v;
    int d=0;
    while(getline(cin>>ws,sv[d].masv)){
    	nhap(sv[d]);
    	d++;
	}
	sort(sv,sv+d,cmp);
	for(int i=0;i<d;i++){
		in(sv[i]);
	}
}

