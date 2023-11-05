#include<bits/stdc++.h>
using namespace std;
int main(){
     ofstream f;
     f.open("Sinhvien.dat");
     int n;
     cin>>n;
     string masv;
	 string name;
	 string lop;
	 float tin;
	 float c;
	 cin.ignore();
     for(int i=1;i<=n;i++){
     	cin>>masv;
     	f<<masv<<" ";
     	cin.ignore();
     	getline(cin,name);
     	f<<name<<" ";
     	cin>>lop;
     	f<<lop<<" ";
     	cin>>tin;
     	f<<tin<<" ";
     	cin>>c;
     	f<<c<<endl;
	 }
	 f.close();
	 
}

