#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n;
	cin>>n;
	vector<int>fibo;
	fibo.push_back(1);
	fibo.push_back(1);
	while(fibo.back()<n){
		fibo.push_back(fibo[fibo.size()-1]+fibo[fibo.size()-2]);
	}
	int i=fibo.size()-1;
	vector<int>ans;
	while(n>0){
		if(n>=fibo[i]){
			n-=fibo[i];
			ans.push_back(fibo[i]);
		}
		i--;
	}
	cout<<ans.size()<<endl;
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
}

