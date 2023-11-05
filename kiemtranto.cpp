#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int check=1;
	if(n<2){
		cout<<"NO\n";
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			check=0;
			break;
		}
	}
	if(check==1) cout<<"YES\n";
	else cout<<"NO\n";
}
