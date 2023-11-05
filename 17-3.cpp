#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;// do dai mang
	int socantim;
	cin>>n;
	int mang[1000];
	for(int i=1;i<=n;i++){
		cin>>mang[i];
	}
	cin>>socantim;
	int dk=0;
	for(int i=1;i<=n;i++){
		if(mang[i]==socantim){
			cout<<i;
			dk=1;
		}
	}
	if(dk==0)
	cout<<"Khong co";
	cout<<"HELLO";
 
}

