#include<iostream>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[100];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]>a[j]){
					int temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}int min=a[n-1];
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[j]-a[i]<min) min=a[j]-a[i];
			}
		}
		cout<<min<<endl;
	}
}
