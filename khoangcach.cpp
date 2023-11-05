#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		double a1,a2,b1,b2;
		cin>>a1>>a2>>b1>>b2;
		double kc;
		kc=(double)sqrt((b1-a1)*(b1-a1)+(b2-a2)*(b2-a2));
		cout<<fixed<<setprecision(4)<<kc<<"\n";
	}
}
