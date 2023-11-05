#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
struct SinhVien{
	string name;
	int age;
	string DiaChi;
	string GioiTinh;
	float Diem;
};
int main(){
	int t;
	cout<<"So luong sinh vien: ";
	cin>>t;	
	struct SinhVien sinhvien1[1000];
	for(int i=1;i<=t;i++){
		cout<<"Sinh vien"<<i<<" : "<<endl;
		cout<<"Ten: ";
		cin>>sinhvien1[i].name;
		cout<<"Tuoi: ";
		cin>>sinhvien1[i].age;
		cout<<"Gioi tinh: ";
		cin>>sinhvien1[i].GioiTinh;
		cout<<"Dia chi: ";
		cin>>sinhvien1[i].DiaChi;
		cout<<"Diem: ";
		cin>>sinhvien1[i].Diem;
		cout<<endl;
	}
	cout<<"-----THONG TIN SINH VIEN-----"<<endl;
	for(int i=1;i<=t;i++){
		cout<<"Sinh vien "<<i<<": ";
		cout<<sinhvien1[i].name<<" ";
		cout<<sinhvien1[i].age<<" ";
		cout<<sinhvien1[i].GioiTinh<<" ";
		cout<<sinhvien1[i].DiaChi<<" ";
		cout<<sinhvien1[i].Diem<<" ";
		cout<<endl;
    }
}
