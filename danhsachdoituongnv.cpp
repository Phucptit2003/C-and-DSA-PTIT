#include<bits/stdc++.h>

using namespace std;
int dem=0;
class NhanVien{
	public:
	string manv,name,sex,date,adress,thue,ngayki;
	friend istream& operator>>(istream& input,NhanVien &a){
		cin.ignore();
		getline(cin,a.name);
		cin>>a.sex;
		cin>>a.date;
		cin.ignore();
		getline(cin,a.adress);
		cin>>a.thue;
		cin>>a.ngayki;
		return input;
	}
	friend ostream& operator<<(ostream& output,NhanVien a){
		dem++;
		a.manv=to_string(dem);
		while(a.manv.size()<5) a.manv="0"+a.manv;
		cout<<a.manv<<" "<<a.name<<" "<<a.sex<<" "<<" "<<a.date<<" "<<a.adress<<" "<<a.thue<<" "<<a.ngayki<<endl;
		return output;
	}
	
};
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}

