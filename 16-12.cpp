#include<bits/stdc++.h>

using namespace std;

int main(){
	while(1){
		int n;
		cout<<"Nhap so n: ";
		cin>>n;
		int m=n;
		int sum=0;
		while(n>0){
			sum+=n%10;
			n/=10;
		}
		if(sum%10==9) cout<<m<<" la so dep"<<endl;
		else cout<<m<<" khong la so dep"<<endl;
	}
}

