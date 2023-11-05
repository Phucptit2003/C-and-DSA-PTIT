#include<bits/stdc++.h>

using namespace std;
int n,k,res=INT_MAX;
string s;

int Try(vector<string>&vs,vector<int>a){
	int m=INT_MAX,M=INT_MIN,tmp;
	string s;
	for(auto i:vs){
		s="";
		for(int j:a) s+=i[j];
		tmp=stoi(s);
		m=min(m,tmp);
		M=max(M,tmp);
	}
	return M-m;
}
int main(){
	cin>>n>>k;
	vector<string>vs;
	while(cin>>s){
		vs.push_back(s);
	}
	vector<int>a;
	for(int i=0;i<k;i++) a.push_back(i);
	do{
		res=min(res,Try(vs,a));
	}
	while(next_permutation(a.begin(),a.end()));
	cout<<res<<endl;
}

