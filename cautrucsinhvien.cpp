#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string masv="B20DCCN001";
	string name;
	string lop;
	string date;
	float gpa;
};
void nhap(SinhVien &sv){
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
void in(SinhVien sv){

	 if(sv.gpa<4)
    {
	cout<<sv.masv<<" "<<sv.name<<" "<<sv.lop<<" "<<sv.date<<" "<<fixed<<setprecision(2)<<sv.gpa;
}}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}

