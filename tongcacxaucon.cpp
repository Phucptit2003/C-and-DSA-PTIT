#include<bits/stdc++.h>

using namespace std;
string s;
char x[15];
int k;
long long sum;
void Trans(int i ){
	long long res=0;
	for(int j=k;j<=i;j++){
		res=res*10+x[j]-'0';
	}
	sum+=res;
}
void Try(int i){
	for(int j=i-1;j<s.size();j++){
		x[i]=s[j];
		Trans(i);
		Try(i+1);
		j=s.size()-1;
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		sum=0;
		cin>>s;
		for( k=1;k<=s.size();k++){
			Try(k);
		}
		cout<<sum<<endl;
	}
}

