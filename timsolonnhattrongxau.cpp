#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		long long res=0;
		long long max=-1000000;
		stringstream ss(s);
		vector<char>v;
		char c;
		while(ss>>c) v.push_back(c);
		for(int i=0;i<v.size();i++){
			if(isdigit(v[i])){
				res=res*10+v[i]-48;
			}
			else {
				if(res>max) max=res;
				res=0;
			}
			
		}cout<<max<<endl;
	}
}
