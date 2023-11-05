#include<bits/stdc++.h>

using namespace std;

int main(){
	int n=7;
//	cin>>n;
	int a[n]={2 ,5, 1, 7, 9, 8, 12};
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
}

