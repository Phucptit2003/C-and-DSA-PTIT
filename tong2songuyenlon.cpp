#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		string a;
		cin>>a;
		string b;
		cin>>b;
		int dem=0;
		string res="";
		while(a.length()<b.length()) a="0"+a;
		while(b.length()<a.length()) b="0"+b;
		for(int i=a.length()-1;i>=0;i--){
			int sum=a[i]-48+b[i]-48+dem;
			dem=sum/10;
			sum=sum%10;
			res=(char)(sum+48)+res;
		}
		if(dem>0) res="1"+res;
		cout<<res<<endl;
	}
}
