#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n];
		vector<int>v;
		for(int i=0;i<n;i++){
			cin>>a[i];
			v.push_back(a[i]);
		}
		stack<string>st1;
		string st;
		cout<<endl;
		while(n>0){
			st="[";
			for(int i=0;i<v.size();i++){
				st+=to_string(v[i]);
				if(i==v.size()-1) st+="]";
				else st+=" ";
			}
			cout<<endl;
			v.clear();
			for(int i=0;i<n-1;i++){
				int t=a[i]+a[i+1];
				v.push_back(t);
			}
			n--;
			for(int i=0;i<v.size();i++){
				a[i]=v[i];
			}	
			st1.push(st);
		}
		while(!st1.empty()){
			cout<<st1.top()<<" ";
			st1.pop();
		}
		cout<<endl;
	}
}

