#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int b[10000]={0};
	for (int i = 0; i<n; i++){
		scanf("%d",&a[i]);
		b[a[i]]++;
	}
	int z=1;
	for (int i=0; i<n; i++){
		if(b[a[i]]==0) continue;
		for (int j= i +1; j <n; j++){
			if(a[i] == a[j]){
				b[a[j]]=0;}
				}
				cout<<a[i]<<" ";}

}

