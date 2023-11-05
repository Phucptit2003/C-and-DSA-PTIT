#include<iostream>
using namespace std;
bool check(long long a[],int ac,int b){
	for(int i=ac;i<b;i++){
		for(int j=i+1;j<b;j++){
			if(a[i]==a[j])
				return false;
		}
	}return true;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		long long n;
		cin>>n;
		long long a[1000000];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		bool c=false;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]==a[j]&&check(a,i,j)==true){
					c=true;
					cout<<a[i]<<endl;
					break;
				}
			}
			if(c==true) break;
		}
		if(!c) cout<<"-1\n";
	}
}
