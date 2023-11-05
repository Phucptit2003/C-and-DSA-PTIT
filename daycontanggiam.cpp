#include<bits/stdc++.h>

using namespace std;
int n,a[25],b[25];
void Xuly(int m){
	if(m>n-1||a[m]>a[m+1]){
		return;
	}
	if(a[m]<a[m+1]){
		cout<<a[m]<<" "<<a[m+1]<<endl;
	}
	for(int i=1;i<=n;i++){
		if(b[m]=0){
			b[m]=1;
			Xuly(m+1);
			b[m]=0;
		}
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=0;
	}
	Xuly(1);
}

