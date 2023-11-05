#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	int t=1;
	int check;
	sort(b,b+n);
	for(int i=0;i<n-1;i++){
		check=0;
		cout<<"Buoc "<<t<<": ";
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
			if(a[i]!=b[i]) check=1;
		}
		t++;
		cout<<endl;
		if(check==0) break;
	}
}

