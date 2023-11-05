#include<bits/stdc++.h>

using namespace std;

bool Smaller(string x,string y){
	if(x.length()<y.length()) return true;
	if(x.length()>y.length()) return false;
	for(int i=0;i<x.length();i++){
		if(x[i]>=y[i]){
			return false;
		}
		if(x[i]<y[i]) return true;
	}
	return false;
}
void Xuly(string x,string y){
	if(Smaller(x,y)) swap(x,y);
	int l1=x.length();
	int l2=y.length();
	reverse(x.begin(),x.end());
	reverse(y.begin(),y.end());
	int nho=0;
	string str="";
	for(int i=0;i<l2;i++){
		int t=(x[i]-'0')-(y[i]-'0')-nho;
		if(t<0){
			t=t+10;
			nho=1;
		} 
		else nho=0;
		str.push_back(t+'0');
	}
	for(int i=l2;i<l1;i++){
		int t=(x[i]-'0')-nho;
		if(t<0){
			t=t+10;
			nho=1;
		} else nho=0;
		str.push_back(t+'0');
	}
	reverse(str.begin(),str.end());
	cout<<str<<endl;
}

int main(){
	int test;
	cin>>test;
	while(test--){
		string x,y;
		cin>>x>>y;
	    Xuly(x,y);
	}
}
