#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct Sinhvien{
	string hoten;
//	char hoten[10];
	char gt[10];
	int age;
	float dt,dl,dh;
	float dtb;
};
int main(){
	ofstream fcout;
	fcout.open("Danhsachsv1.out");
	int n;
	cout<<"So luong sinh vien: ";
	cin>>n;
	struct Sinhvien sv[1000];
	cin.ignore();
	for(int i=1;i<=n;i++){
		cout<<"Nhap thong tin sinh vien thu: "<<i<<endl;
		cout<<"Ten: ";
//		cin>>sv[i].hoten;
       getline(cin,sv[i].hoten);
		cout<<endl;
//		cout<<"Gioi tinh: ";
//		cin>>sv[i].gt;
//		cout<<endl;
//		cout<<"Tuoi: ";
//		cin>>sv[i].age;
//		cout<<endl;
//		cout<<"Diem Toan-Diem Ly-Diem Hoa: ";
//		cin>>sv[i].dt>>sv[i].dl>>sv[i].dh;
//		cout<<endl;
	}
	for(int i=1;i<=n;i++){
		cout<<"Ten: "<<sv[i].hoten<<endl;
		fcout<<"Ten: "<<sv[i].hoten<<endl;
//		fcout<<"Tuoi: "<<sv[i].age<<endl;
//		fcout<<"Diem Toan-Diem Ly-Diem Hoa: "<<sv[i].dt<<" "<<sv[i].dl<<" "<<sv[i].dh<<endl;
//		fcout<<"Diem TB: "<<(sv[i].dt+sv[i].dl+sv[i].dh)/3<<endl;
	}
	fcout.close();
//	cout<<"*****     THONG TIN SINH VIEN     *****"<<endl;
//	for(int i=1;i<=n;i++){
//		cout<<"Ten"
//	}
}
