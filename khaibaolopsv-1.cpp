#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	public:
	string masv="B20DCCN001";
	string name;
	string lop;
	string date;
	float gpa;

 void   nhap(){
   getline(cin,name);
   cin>>lop;
   cin>>date;
   cin>>gpa;
   	if(date[1]=='/'){
		date="0"+date;
	}
	if(date[4]=='/'){
		date.insert(3,"0");
	}
}
 void   xuat(){

	 if(gpa<4)
    {
	cout<<masv<<" "<<name<<" "<<lop<<" "<<date<<" "<<fixed<<setprecision(2)<<gpa;
}}
};
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}

