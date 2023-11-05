#include<iostream>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[1000];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			if(i%2==0){
				for(int j=i+1;j<n;j++){
					if(a[i]<a[j]){
						int tmp=a[i];
						a[i]=a[j];
						a[j]=tmp;
					}
				}
			}
			if(i%2==1){
				for(int j=i+1;j<n;j++){
					if(a[i]>a[j]){
						int tmp=a[i];
						a[i]=a[j];
						a[j]=tmp;
					}
				}
			}
		}
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
