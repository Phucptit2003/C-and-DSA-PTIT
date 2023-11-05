#include<bits/stdc++.h>

using namespace std;
int n;int a[25];
vector<string>v;
string s;
void Try(int m){
//	if(m>=n) return;
	for(int k=m;k<n-1;k++){
		s+=to_string(a[k])+" ";
		for(int t=k+1;t<n;t++){
			if(a[k]<a[t]){
				s+=to_string(a[t])+" ";
				v.push_back(s);
			}
		}
		s="";
//		Try(m+1);
	}
}
int main(){
	cin>>n;	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	Try(0);
	sort(v.begin(),v.end());
	for(auto x:v){
		cout<<x<<endl;
	}
}

