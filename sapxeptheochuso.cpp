#include<bits/stdc++.h>
using namespace std;
bool check(int a,int b){
	return to_string(a)+to_string(b)>to_string(b)+to_string(a);
}
int main(){
	int test;
	cin>>test;
	int *a;
	while(test--){
		int n;
		cin>>n;
		a=new int[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n,check);
		for(int i=0;i<n;i++){
			cout<<a[i];
		}
		cout<<endl;
		delete[]a;
	}
}
