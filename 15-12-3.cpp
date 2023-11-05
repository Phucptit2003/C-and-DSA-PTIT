#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		int len=s.size();
		int a[len];
		for(int i=0;i<len;i++){
			if(s[i]=='I'){
				a[i]=1;
			} else if(s[i]=='V') a[i]=5;
			else if(s[i]=='X') a[i]=10;
			else if(s[i]=='L') a[i]=50;
			else if(s[i]=='C') a[i]=100;
			else if(s[i]=='D') a[i]=500;
			else if(s[i]=='M') a[i]=1000;
		}
		int dem=a[len-1];
		for(int i=len-1;i>0;i--){
			if(a[i]<=a[i-1]){
				dem=dem+a[i-1];
			}
			else if(a[i]>a[i-1]){
				dem=dem-a[i-1];
			}
		}
		cout<<dem<<endl;
	}
}

