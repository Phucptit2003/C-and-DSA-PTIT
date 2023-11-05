#include<bits/stdc++.h>

using namespace std;
string a;
int b[100],c[100];
void Try(int m){
	for(int i=0;i<a.size();i++){
		if(b[i]==0){
			c[m]=i;
			b[i]=1;
			if(m==a.size()){
				for(int k=1;k<=a.size();k++) cout<<a[c[k]];
				cout<<" ";
			} else{
				Try(m+1);
			}
			b[i]=0;
		}
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>a;
		memset(b,0,sizeof(b));
		sort(a.begin(),a.end());
		Try(1);
		cout<<endl;
	}
}

