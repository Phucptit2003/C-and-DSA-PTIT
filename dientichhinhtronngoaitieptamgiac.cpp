#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238
int check(double a,double b,double c){
	if(a+b<=c) return 0;
	if(a+c<=b) return 0;
	if(b+c<=a) return 0;
	return 1;
}
int main(){
   int test;
   cin>>test;
   while(test--){
   	double a1,a2,b1,b2,c1,c2;
   	cin>>a1>>a2>>b1>>b2>>c1>>c2;
   	double a=sqrt((a1-b1)*(a1-b1)+(a2-b2)*(a2-b2));
   double c=sqrt((a1-c1)*(a1-c1)+(a2-c2)*(a2-c2));
   double b=sqrt((c1-b1)*(c1-b1)+(c2-b2)*(c2-b2));
//   cout<<ab<<" "<<ac<<" "<<bc<<endl;
   if(check(a,b,c)==0) {
   cout<<"INVALID\n";
   continue;}
   double S=0.25*sqrt((a+b-c)*(a+b+c)*(b+c-a)*(c+a-b));
   double r=(a*b*c)/(4*S);
   cout<<fixed<<setprecision(3)<<(double) PI*r*r<<endl;
}
}

