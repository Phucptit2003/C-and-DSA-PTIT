#include<bits/stdc++.h>
using namespace std;
string s;
int check(int n){
	int dem=0;
	for(int i=0;i<s.length();i++){
		int sum=0;
		for(int j=i;j<s.length();j++){
			sum=sum*10+s[j]-'0';
			sum=sum%n;
			if(sum==0) dem++;
		}
	}
	return dem;
}
int main(){
 int test;
 cin>>test;
 while(test--){
 	cin>>s;
 	cout<<check(8)-check(24)<<endl;
 }
}

