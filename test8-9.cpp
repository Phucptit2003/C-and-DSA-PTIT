#include<iostream>
#include<string>
using namespace std;
int ktra(int o,int p){
	if(o==p) return 1;
	else return 0;
}
int main(){
	string name;
	cout<<"Nhap ho ten:";
	getline(cin,name);
	cout<<"Chao mung "<<name<<" den voi tro choi !!!"<<endl;
	cout<<"Chung ta bat dau nhe "<<name<<endl;
	long long a;
	cout<<"Nhap so a:";
	cin>>a;
	long long b;
	cout<<"Nhap so b:";
	cin>>b;
	int tong,hieu,tich,thuong;
	cout<<"Bai 1.Tinh tong a+b=";
	cin>>tong;
	if(ktra(tong,a+b)!=1){
		cout<<"Ban da tra loi sai.Hay lam lai tu dau";
		return 0;
	} else cout<<"Dung roi.Hay tiep tuc nhe."<<endl;
	cout<<"bai 2.Tinh hieu a-b=";
	cin>>hieu;
	if(ktra(hieu,a-b)!=1){
		cout<<"Ban da tra loi sai.Hay lam lai tu dau";
		return 0;
	} else cout<<"Dung roi.Hay tiep tuc nhe."<<endl;
	cout<<"bai 3.Tinh tich axb=";
	cin>>tich;
	if(ktra(tich,a*b)!=1){
		cout<<"Ban da tra loi sai.Hay lam lai tu dau";
		return 0;
	} else cout<<"Dung roi.Hay tiep tuc nhe."<<endl;
	cout<<"bai 4.Tinh thuong a:b=";
	cin>>thuong;
	if(ktra(thuong,a/b)!=1){
		cout<<"Ban da tra loi sai.Hay lam lai tu dau";
		return 0;
	} else {
	
	cout<<"Ban da vuot qua het thu thach. CHUC MUNG BAN CHIEN THANG"<<endl;
	cout<<"An tiep de chon qua"<<endl;}
	int key;
	cout<<name<<" hay chon phan qua random tu 1->4:"<<endl;
	cin>>key;
	switch(key){
		case 1: cout<<"Choi dien thoai 10 phut ";
		break;
		case 2: cout<<"Co cai NIT";
		break;
		case 3:cout<<"Hoc 30 phut";
		break;
		case 4:cout<<"Coi ti vi 20 phut";
		break;
		default:
	    cout<<"Khong co phan qua hop le. "<<endl;
	    break;
			}
}
