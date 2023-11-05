#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n];
		unordered_map<int,int>mp;
		for(int i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
		}
		stack<int>st;
		int res[n];
		res[n-1]=-1;
		st.push(n-1);
		for(int i=n-2;i>=0;i--){
			if(st.size() && mp[a[i]]<mp[a[st.top()]]){
				res[i]=a[st.top()];
				st.push(i);
			}
			else{
				while(st.size()&& mp[a[i]]>=mp[a[st.top()]]) st.pop();
				if(st.size()) res[i]=a[st.top()];
				else res[i]=-1;
				st.push(i);
			}
		}
		for(auto i:res) cout<<i<<" ";
		cout<<endl;
	}
}

