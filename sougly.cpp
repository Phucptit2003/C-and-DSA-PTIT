#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<int>v;
	priority_queue<int,vector<int>,greater<int>>pq;
	unordered_map<int,bool>mp;
	pq.push(1);
	int tmp;
	while(v.size()<1e4){
		tmp=pq.top();
		pq.pop();
		v.push_back(tmp);
		if(!mp[tmp*2]){
			pq.push(tmp*2);
			mp[tmp*2]=1;
		}
		if(!mp[tmp*3]){
			pq.push(tmp*3);
			mp[tmp*3]=1;
		}
		if(!mp[tmp*5]){
			pq.push(tmp*5);
			mp[tmp*5]=1;
		}
	}
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		cout<<v[n-1]<<endl;
	}
}

