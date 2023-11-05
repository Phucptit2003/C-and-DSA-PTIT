#include<bits/stdc++.h>
using namespace std;
void chuanhoa(string &a){
	for(int i=0;i<a.size();i++){
		for(int j=i+1;j<a.size();j++){
			if(a[i]>a[j]){
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
   cout<<a;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		stringstream ss(s);
		vector<char>v;
		char c;
		while(ss>>c) v.push_back(c);
		string res="";
		int sum=0;
		for(int i=0;i<v.size();i++){
			if(!isdigit(v[i])){
				res+=v[i];
			}
			if(isdigit(v[i])){
				sum+=v[i]-48;
			}
		}
		chuanhoa(res);
		cout<<sum<<endl;;
	}
}
