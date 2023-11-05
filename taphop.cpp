#include<bits/stdc++.h>

using namespace std;
int n,k,s;
int cnt;
void Try(int i,vector<int>p,int sum=0){
	if(p.size()>k||sum>s) return;
	if(sum==s&&p.size()==k){
		cnt++;
	}
	for(int j=i+1;j<=n;j++){
		p.push_back(j);
		Try(j,p,sum+j);
		p.pop_back();
	}
}
int main(){	
	while(1){
		cnt=0;
		cin>>n>>k>>s;
		if(n==k&&k==s&&s==0){
			break;
		}
		vector<int>p;
		Try(0,p);
		cout<<cnt<<endl;
	}
}

