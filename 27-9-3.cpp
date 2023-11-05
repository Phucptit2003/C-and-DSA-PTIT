#include<bits/stdc++.h>
#include<math.h>
using namespace std;
class ToaDo{
	private:
	   double a1,a2;
	   double kc;
	public:
	   friend istream &operator>>(istream &input,ToaDo &td){
	   	    cin>>td.a1>>td.a2;
	   }
	    void check(ToaDo &a,ToaDo &b,ToaDo &c){
	   	 c.kc=(double)sqrt((b.a1-a.a1)*(b.a1-a.a1)+(b.a2-a.a2)*(b.a2-a.a2));		    
	   }
	   friend ostream &operator<<(ostream &output,ToaDo td){
		cout<<fixed<<setprecision(4)<<td.kc<<"\n";
	   }
};
int main(){
	int test;
	cin>>test;
	while(test--){
		ToaDo A,B,C;
		cin>>A>>B;
		C.check(A,B,C);
		cout<<C;
	}
}
