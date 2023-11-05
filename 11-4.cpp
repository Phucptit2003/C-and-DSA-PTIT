#include<bits/stdc++.h>

using namespace std;
int n;
char a[2]={'6','8'};
	int k;	vector<string>v;
vector<string>st(1005);
bool tmp(string a,string b){
	if(a.size()==b.size()) return a<b;
	else return a.size()<b.size();
}
bool check(string s){
	if(s.size()%2!=0){
		return false;
	}
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-1-i]){
			return false;
		}
	}

	return true;
}
void Xuly(int m,string s){
	if(m>n) return;
	if(m<=n&&m!=0){
		st.push_back(s);
	}
	for(int i=0;i<2;i++){
		Xuly(m+1,s+a[i]);
	}
}
void Chay(){
		n=1005;
		Xuly(0,"");	
		sort(st.begin(),st.end(),tmp);	
	
		for(auto x:st){
			if(check(x)){
				v.push_back(x);
			}
		}
		
}
int main(){
		Chay();
		int test;
		cin>>test;
		while(test--){
			cin>>k;
			for(int i=0;i<k;i++){
				cout<<v[i]<<" ";
			}
			cout<<endl;
	}
}


