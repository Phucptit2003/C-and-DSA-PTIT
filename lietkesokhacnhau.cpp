#include<bits/stdc++.h>
using namespace std;
void sapxep(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}

int main(){
	int n;
	cin>>n;
	int a[100];
	int b[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=1;
	}
	sapxep(a,n);
	for(int i=0;i<n;i++){
		if(b[i]==0) continue;
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				b[j]=0;
			}
	} if(b[i]!=0) cout<<a[i]<<" ";
	}	
	cout<<endl;
}
