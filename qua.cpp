#include<bits/stdc++.h>
using namespace std;
struct KhachHang{
	string namekh,sex,date,address;
};
int main(){
     ifstream f,g;
     ofstream h;
     f.open("FileKH.in.txt");
     g.open("FileMH.in");
     int n;
	 f>>n;
	 KhachHang kh[n];
	 f.ignore();
     for(int i=0;i<n;i++){
        getline(f,kh[i].namekh);
		getline(f,kh[i].sex);
		getline(f,kh[i].date);
		getline(f,kh[i].address);
	 }
	 for(int i=0;i<n;i++){
	 	cout<<kh[i].namekh<<" "<<kh[i].sex<<" "<<kh[i].date<<" "<<kh[i].address<<endl;
	 }
}

