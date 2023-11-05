#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int x;
		priority_queue<int,vector<int>,greater<int>>pq;
		for(int i=0;i<n;i++){
			cin>>x;
			pq.push(x);
		}
		long long sum=0,tmp;
		while(pq.size()>1){
			tmp=pq.top();
			pq.pop();
			tmp+=pq.top();
			pq.pop();
			sum+=tmp;
			pq.push(tmp);
		}
		cout<<sum<<endl;
	}
}

