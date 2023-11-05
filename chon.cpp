#include<bits/stdc++.h>

using namespace std;

int main(){
	int n=7;
	int a[n]={2 ,5, 1, 7, 9, 8, 12};
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		swap(a[i],a[min]);		
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

