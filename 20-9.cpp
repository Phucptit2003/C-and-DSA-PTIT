#include<bits/stdc++.h>
using namespace std;
class Nguoi{
	private: 
	    string name;
	    int ns;
	public:
		Nguoi(){
			name="";
			ns=0;
		}
		~Nguoi();
		friend istream& operator>>(istream &input,Nguoi &ng){
			getline(cin,ng.name);
			cin>>ng.ns;
			return input;
		}
};
class MonHoc{
	private:
		string monhoc;
		int st;
	public:
		MonHoc(){
			monhoc="";
			st=0;
		}
	   ~MonHoc();
	    friend istream& operator>>(istream &input,MonHoc &mh){
	    	getline(cin,mh.monhoc);
	    	cin>>mh.st;
	    	return input;
		}	
};
class GiaoVien: public Nguoi{
	private:
		string bomon;
		MonHoc mh;
	public:
		GiaoVien():mh(),Nguoi(){
			bomon="";
			
		}
		~GiaoVien();
		friend istream &operator>>(istream &input,GiaoVien &gv){
			getline(cin,gv.bomon);
			return input;
		}
		friend ostream &operator<<(ostream &output,GiaoVien gv){
			cout<<gv.bomon<<" "<<gv.mh.<<" "<<gv.
		}
};
int main(){

}

