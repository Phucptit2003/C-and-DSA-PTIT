#include<bits/stdc++.h>

using namespace std;

int main(){
		string a,b;
		cin>>a>>b;
		multiset<char>s;
		multiset<char>s1;
		long long dem=0;
		for(auto x:a){
			s.insert(x);
		}
		for(auto x:b){
			s1.insert(x);
		}
		for(auto x:s){
			if(s1.count(x)!=0) dem++;
		}
		cout<<dem<<endl;
}


