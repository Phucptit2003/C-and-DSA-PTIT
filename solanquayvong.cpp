#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int j=-1;
		n--;
		for(int i=0;i<n;i++){
			if(a[i]>a[i+1]) j=i+1;
		}
		if(j==-1){
			if(a[0]<=a[n-1]) cout<<0<<endl;
			else cout<<n<<endl;
		}
		else cout<<j<<endl;
	}
}

