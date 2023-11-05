#include<iostream>
#include<fstream>
#include<string>
#include<fstream>
using namespace std;
struct Sinhvien{
	string hoten;
	char gt[10];
	int age;
	float dt,dl,dh;
	float dtb;
};
void nhapsv(int n){
	ifstream fcin;
	fcin.open("Danhsachsv.out");
	struct Sinhvien sv[1000];
//	cin.ignore();
	for(int i=1;i<=n;i++){
		fcin>>sv[i].hoten;
		fcin>>sv[i].age;
		fcin>>sv[i].gt;
//		cout<<"Nhap thong tin sinh vien thu: "<<i<<endl;
//		cout<<"Ten: ";
  //      getline(cin,sv[i].hoten);
//		cout<<endl;
//		cout<<"Gioi tinh: ";
//		cin>>sv[i].gt;
//		cout<<endl;
//		cout<<"Tuoi: ";
//		cin>>sv[i].age;
//		cout<<endl;
//		cout<<"Diem Toan-Diem Ly-Diem Hoa: ";
//		cin>>sv[i].dt>>sv[i].dl>>sv[i].dh;
//		cout<<endl;
//		cin.ignore();
	}
	for(int i=1;i<=n;i++){
		cout<<"Ten: "<<sv[i].hoten<<endl;
		cout<<"Tuoi: "<<sv[i].age<<endl;
		cout<<"Diem Toan-Diem Ly-Diem Hoa: "<<sv[i].dt<<" "<<sv[i].dl<<" "<<sv[i].dh<<endl;
		cout<<"Diem TB: "<<(sv[i].dt+sv[i].dl+sv[i].dh)/3<<endl;
	}
	fcin.close();
}
