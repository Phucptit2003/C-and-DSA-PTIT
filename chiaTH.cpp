#include<iostream>
using namespace std;
int main(){
	long a;
	cout<<"Nhap so a:";
	cin>>a;
	long b;
	cout<<"Nhap so b:";
	cin>>b;
	cout<<"    1.Tinh tong    "<<endl;
	cout<<"    2.Tinh hieu    "<<endl;
	cout<<"    3.Tinh tich    "<<endl;
	cout<<"    4.Tinh thuong  "<<endl;
	int key;
	cout<<"Chon phep tinh:";
	cin>>key;
	switch(key){
		case 1: cout<<"Tong 2 so la: "<<a+b<<endl;
		break;
		case 2: cout<<"Hieu 2 so la: "<<a-b<<endl;
		break;
		case 3:cout<<"Tich 2 so la: "<<a*b<<endl;
		break;
		case 4:cout<<"Thuong 2 so la: "<<a/b<<endl;
		break;
		default:
	    cout<<"Khong co phep tinh"<<endl;
		break;	}
}
