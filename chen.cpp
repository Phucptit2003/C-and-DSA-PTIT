#include<bits/stdc++.h>

using namespace std;

int main(){
	int n=7;
	int a[n]={2 ,5, 1, 7, 9, 8, 12};
	int min,j;
	for(int i=0;i<n;i++){
		min=a[i];
		j=i-1;;	
		while(j>=0 && a[j]>min){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=min;
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

