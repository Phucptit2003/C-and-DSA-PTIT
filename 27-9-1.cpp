#include<bits/stdc++.h>
using namespace std;
class DaThuc{
	public:
		int static bac;
		float *heso;
	DaThuc()
	{
		bac=0;
		heso=new float(bac+1);
	}
	~DaThuc(){
		delete heso;
	}
    friend istream &operator>>(istream &input,DaThuc &dt){
		if(dt.bac<1) {
		cout<<"0\n";
		}
	    cin>>dt.bac;
		for(int i=0;i<=bac;i++){
			cin>>dt.heso[i];
		}
		return input;
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
	friend ostream& operator<<(ostream &output,DaThuc dt){
			if(dt.heso[0]!=0) cout<<dt.heso[0]<<"+";
			if(dt.heso[1]!=0) cout<<dt.heso[1]<<"*x"<<"+";
			for(int i=2;i<bac;i++){
				if(dt.heso[i]!=0) cout<<dt.heso[i]<<"*x^"<<i<<"+";
			}
			if(dt.heso[bac]!=0) cout<<dt.heso[bac]<<"*x^"<<bac;
			return output;
		}
};
int main(){
   DaThuc A,B,C;
   cin>>A;
   cin>>B;
    C=A+B;
   cout<<C;
      
}

