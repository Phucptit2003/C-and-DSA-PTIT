#include<bits/stdc++.h>

using namespace std;
int n;
char a[2]={'6','8'};
vector<string>st;
bool tmp(string a,string b){
	if(a.size()==b.size()) return a<b;
	else return a.size()<b.size();
}
void Xuly(int m,string s){
	if(m>n) return;
	if(m<=n&&m!=0){
		st.push_back(s);
//		cout<<s<<endl;
//		return;
	}
	for(int i=0;i<2;i++){
		Xuly(m+1,s+a[i]);
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n;
		st.clear();
		Xuly(0,"");	
		sort(st.begin(),st.end(),tmp);
		cout<<st.size()<<endl;	
		for(auto x:st){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}

