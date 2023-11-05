#include<bits/stdc++.h>
using namespace std;
int dem1=0;
int dem2=0;
int dem3=0;
class KhachHang;
class MatHang;
map<string,KhachHang>KH;
map<string,MatHang>MH;
class KhachHang{
private:
    string makh,namekh,sex,date,address;
public:
	friend istream& operator>>(istream& input,KhachHang &kh){
		dem1++;
		kh.makh="KH"+string(3-to_string(dem1).size(),'0')+to_string(dem1);
		if(dem1==1)
		input.ignore();
		getline(input,kh.namekh);
		getline(input,kh.sex);
		getline(input,kh.date);
		getline(input,kh.address);
		KH[kh.makh]=kh;
		return input;
	}
	string getTenKH(){
		return this->namekh;
	}
	string getDiaChiKH(){
       	return this->address;
    }
};
class MatHang{
public:
	string mamh,namemh,donvi;
	int giamua;int giaban;
	friend istream& operator>>(istream& input,MatHang mh){
		dem2++;
		mh.mamh="MH"+string(3-to_string(dem2).size(),'0')+to_string(dem2);
		input.ignore();
		getline(input,mh.namemh);
		input>>mh.donvi;
		cin>>mh.giamua>>mh.giaban;
		MH[mh.mamh]=mh;
		return input;
	}
};
class HoaDon:public KhachHang,public MatHang{
private:
	string mamh1;
    string mahoadon;
    string makh1;
	int soluong;
public:
	friend istream& operator>>(istream& input,HoaDon &hd){
		dem3++;
		hd.mahoadon="HD"+string(3-to_string(dem3).size(),'0')+to_string(dem3);
		cin>>hd.makh1>>hd.mamh1>>hd.soluong;
		return input;
	}
	friend ostream& operator<<(ostream& output,HoaDon hd){
		output<<hd.mahoadon<<" "<< KH[hd.makh1].getTenKH()<<" "<< KH[hd.makh1].getDiaChiKH()<<" "<<MH[hd.mamh1].namemh<<" "<<MH[hd.mamh1].donvi<<" "<<MH[hd.mamh1].giamua<<" "<<MH[hd.mamh1].giaban<<" "<<hd.soluong<<" "<<hd.soluong*MH[hd.mamh1].giaban<<endl;
		return output;
	}
};
int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}

