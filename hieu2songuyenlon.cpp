#include<bits/stdc++.h>
using namespace std;
bool nhonhat(string a,string b){
	int l1=a.length();
	int l2=b.length();
	if(l1<l2) return false;
	if(l1>l2) return false;
	for(int i=0;i<l1;i++){
		if(a[i]<b[i]) return true;
		else if(a[i]>b[i]) return false;
	}
	return false;
}
void check(string a,string b){

	if(nhonhat(a,b)) swap(a,b);
	int l1=a.length();
	int l2=b.length();
	string res="";
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	int nho=0;
	for(int i=0;i<l2;i++){
		int so=((a[i]-'0')-(b[i]-'0')-nho);
		if(so<0){
			nho=1;
			so=so+10;
		} else nho=0;
		res.push_back(so+'0');
	}
	for(int i=l2;i<l1;i++){
		int so=((a[i]-'0')-nho);
		if(so<0){
			so=so+10;
			nho=1;
		}else nho=0;
		res.push_back(so+'0');
	}
	reverse(res.begin(),res.end());
	cout<< res<<endl;
}
int main(){
      int test;
      cin>>test;
      while(test--){
      	string a,b;
      	cin>>a>>b;
      	check(a,b);
	  }
}

