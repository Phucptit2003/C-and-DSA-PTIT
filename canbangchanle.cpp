#include<iostream>
#include<math.h>
using namespace std;
int check(int n){
	int demchan=0;
	int demle=0;
	while(n>0){
		int c=n%10;
		if(c%2==0)demchan++;
		else demle++;
		n=n/10;
	} if(demchan==demle) return 1;
	else return 0;
}
int main(){
	int n;
	cin>>n;
	int dem=0;
	for(int i=pow(10,n-1);i<pow(10,n);i++){
		if(check(i)==1){
			cout<<i<<" ";
			dem++;
		}
	if(dem==10) {
	cout<<"\n";
	dem=0;}
	}
}
