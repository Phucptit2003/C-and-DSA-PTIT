#include<bits/stdc++.h>

using namespace std;
void Xuly(string v){
	int i=v.size()-2;
	while(i>=0&&v[i]>=v[i+1]) i--;
	if(i==-1){
		cout<<"BIGGEST"<<" ";
		return;
	}
	int k=v.size()-1;
	while(v[k]<=v[i]) k--;
	swap(v[i],v[k]);
	int l=i+1,r=v.size()-1;
	while(l<=r){
		swap(v[l],v[r]);
		l++;
		r--;
	}
	cout<<v<<endl;
	return;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int dem;
		cin>>dem;
		cout<<dem<<" ";
		string s;
		cin>>s;
		Xuly(s);
		cout<<endl;
	}
}

