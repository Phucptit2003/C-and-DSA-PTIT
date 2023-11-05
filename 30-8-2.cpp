#include<bits/stdc++.h>
using namespace std;
typedef struct {
	string masv;
	 string name;
	 string lop;
	 float tin;
	 float c;
}SinhVien;
void check(SinhVien sv[]){
	ofstream f;
	f.open("Sinhvien.dat");
	int n,i;
	cout<<"Nhap so luong sv:";
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>sv[i].masv;
     	f<<sv[i].masv<<" ";
     	cin.ignore();
     	getline(cin,sv[i].name);
     	f<<sv[i].name<<" ";
     	cin>>sv[i].lop;
     	f<<sv[i].lop<<" ";
     	cin>>sv[i].tin;
     	f<<sv[i].tin<<" ";
     	cin>>sv[i].c;
     	f<<sv[i].c<<endl;
	}
	f.close();
}
void check2(SinhVien sv){
	ifstream f;
	f.open("Sinhvien.dat");
	f>>sv.masv>>sv.name>>sv.lop>>sv.tin>>sv.c;
	cout<<sv.masv<<" "<<sv.name<<" "<<sv.lop<<" "<<sv.tin<<" "<<sv.c;
	f.close();
}
int main(){
	
    SinhVien ds[50];
    check(ds);int n;
	cin>>n;
    for(int i=1;i<=n;i++){
    	if(ds[i].c>=7.0){
    		check2(ds[i]);
		}
	}
}

