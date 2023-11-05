#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	vector<int>v;
	while(cin>>t){
		v.push_back(t);
	}
	int sum=0;
	for(auto x:v){
		sum+=x;
	}
	cout<<sum-v.size()-1;
}

