#include<bits/stdc++.h>

using namespace std;
int dem=0;
class Thongtin{
	public:
	string tencha,tencon;
	int tuoilucsinh,tuoihientai,tuoicon;
	friend istream &operator>>(istream &input,Thongtin &tt){	
		input>>tt.tencha;
		input>>tt.tencon;
		input>>tt.tuoilucsinh;
		if(tt.tencha=="Ted"){
			tt.tuoihientai=100;
	    }
		return input;
	}	
	friend ostream &operator<<(ostream &output,Thongtin &tt){
		output<<tt.tencon<<" "<<tt.tuoicon<<endl;
		return output;
	}	
};
bool Sapxep(Thongtin &tt,Thongtin &tt1){
	return tt.tuoicon>tt1.tuoicon;
}
void Capnhattuoi(Thongtin tt[],int X){
	for(int i=0;i<X;i++){
		tt[i].tuoicon=tt[i].tuoihientai-tt[i].tuoilucsinh;
	}
}
int main(){
	int test;
	cin>>test;
	for(int j=1;j<=test;j++){
		int X;
		cin>>X;
		int a[X];
		Thongtin tt[X];
		for(int i=0;i<X;i++){
			cin>>tt[i];
			a[i]=0;
		}
	
		for(int i=0;i<X;i++){
			for(int j=i+1;j<X;j++){
				if(tt[j].tencon==tt[i].tencha){
					swap(tt[i],tt[j]);
				}
			}
		}
	
		for(int i=0;i<X;i++){
			for(int j=i+1;j<X;j++){
				if(tt[i].tencon==tt[j].tencha){
					tt[j].tuoihientai=tt[i].tuoihientai-tt[i].tuoilucsinh;
				}
			}
		}
		Capnhattuoi(tt,X);
		sort(tt,tt+X,Sapxep);
		cout<<"DATASET"+to_string(j)<<endl;
		for(int i=0;i<X;i++){
			cout<<tt[i];
		}
	}	
}
