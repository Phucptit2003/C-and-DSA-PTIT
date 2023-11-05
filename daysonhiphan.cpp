#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n];
		int b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int j=0;j<n;j++){
			cin>>b[j];
		}
		int max=1;
		int k=0;
		for(int i=0;i<n;i++){
			int x=0;
			int y=0;
			for(int j=i;j<n;j++){
				x+=a[j];
				y+=b[j];
			if(x==y) k=j-i+1;
		}
		if(k>max) max=k;}
		cout<<max<<endl;
	}
}
