#include<bits/stdc++.h>
using namespace std;
int x;int n;
bool comp(int a,int b){
	return abs(x-a)<abs(x-b);
}
void check(){
        cin>>n>>x;
		int a[n+1];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
	stable_sort(a,a+n,comp);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		check();
	}
}
