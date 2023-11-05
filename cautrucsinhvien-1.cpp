#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string masv="N20DCCN001";
	string name;
	string lop;
	string date;
	float gpa;
};
void nhapThongTinSV(SinhVien &sv){
   getline(cin,sv.name);
   cin>>sv.lop;
   cin>>sv.date;
   cin>>sv.gpa;
   	if(sv.date[1]=='/'){
		sv.date="0"+sv.date;
	}
	if(sv.date[4]=='/'){
		sv.date.insert(3,"0");
	}
}
void inThongTinSV(SinhVien sv){

	 if(sv.gpa<4)
    {
	cout<<sv.masv<<" "<<sv.name<<" "<<sv.lop<<" "<<sv.date<<" "<<fixed<<setprecision(2)<<sv.gpa;
}}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}

