#include<bits/stdc++.h>

using namespace std;
int Try(int n){
	queue<pair<int,int>>qe;
	qe.push({n,0});
	int f,s;
	while(qe.size()){
		f=qe.front().first;
		s=qe.front().second;
		qe.pop();
		if(f==1) return s;
		if(f%3==0) qe.push({f/3,s+1});
		if(f%2==0) qe.push({f/2,s+1});
		qe.push({f-1,s+1});
	}
	return 0;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		cout<<Try(n)<<endl;
	}
}

