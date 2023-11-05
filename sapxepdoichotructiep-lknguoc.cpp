#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		stack<string>st;
		int t=1;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]>a[j]) swap(a[i],a[j]);
			}
			string s="Buoc ";
			s+=to_string(t)+": ";
			t++;
			for(int k=0;k<n;k++){
				s+=to_string(a[k])+" ";
			}
			st.push(s);
		}
		while(!st.empty()){
			cout<<st.top()<<endl;
			st.pop();
		}
	}
}

