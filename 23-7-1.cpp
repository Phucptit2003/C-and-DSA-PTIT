#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n+2];
		for(int i=1;i<=n;i++) cin>>a[i];
		stack<int>st;
		int c[n+2];
		for (int i=1;i<=n;i++){
			while(st.size() && a[i]>=a[st.top()]) st.pop();
			if(st.empty()) c[i]=0;
			else c[i]=st.top();
			st.push(i);
		}
		for(int i=1;i<=n;i++) cout<<i-c[i]<<" ";
		cout<<endl;
	}
}

