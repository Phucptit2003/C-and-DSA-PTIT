#include<bits/stdc++.h>

using namespace std;	
char c;
int k,a[100];
vector<char>v;
void Try(int m){
	if(m>=k){
		for(int i=0;i<k;i++){
			cout<<v[a[i]];
		}
		cout<<endl;
		return;
	}
	for(int i=a[m-1];i<=v.size()-k+m;i++){
		a[m]=i;
		if(i==v.size()) Try(m);
		else Try(m+1);		
	}
}
int main(){
//		char c;
		cin>>c;
		cin>>k;
		v.clear();
		for(int i=0;i<int(c-64);i++){
			v.push_back(char(i+65));
			a[i]=i;
		}
		Try(0);
}

