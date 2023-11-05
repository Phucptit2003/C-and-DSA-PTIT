#include<bits/stdc++.h>
using namespace std;
class DaThuc{
	public:
		int bac;
		float *heso;
	public:
		DaThuc()
	{
		bac=0;
		heso=new float(bac+1);
	}
	~DaThuc(){
		delete heso;
	}
	DaThuc Cong(DaThuc);
	void nhap(){
		if(bac<1) {
		cout<<"0\n";
		
		}
	  cin>>bac;
		for(int i=0;i<=bac;i++){
			cin>>heso[i];
		}
	}
	DaThuc operator+(DaThuc D){
	DaThuc tong;
	if(bac<D.bac){
		tong.bac=D.bac;
		for(int i=0;i<=bac;i++){
			tong.heso[i]=heso[i]+D.heso[i];
		}
		for(int i=bac+1;i<=D.bac;i++){
			tong.heso[i]=D.heso[i];
		}
	} else {
		tong.bac=bac;
		tong.heso=new float(bac+1);
		for(int i=0;i<=bac;i++){
			tong.heso[i]=heso[i]+D.heso[i];
		}
		for(int i=bac+1;i<=D.bac;i++){
			tong.heso[i]=D.heso[i];
		}
	}
}
	void xuat(){
			if(heso[0]!=0) cout<<heso[0]<<"+";
			if(heso[1]!=0) cout<<heso[1]<<"*x"<<"+";
			for(int i=2;i<bac;i++){
				if(heso[i]!=0) cout<<heso[i]<<"*x^"<<i<<"+";
			}
			if(heso[bac]!=0) cout<<heso[bac]<<"*x^"<<bac;
		}
};
int main(){
   DaThuc p,A,B,C;
   p.nhap();
   p.xuat();
    C=A+B;
    C.xuat();
      
}

