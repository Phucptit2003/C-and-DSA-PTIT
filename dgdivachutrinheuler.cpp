#include<bits/stdc++.h>

using namespace std;
int v,e;
set<int>se[1001];
void nhap(){
	cin>>v>>e;
	for(int i=1;i<=e;i++){
		int x,y;
		cin>>x>>y;
		se[x].insert(y);
//		se[y].insert(x);
	}
}
void euler(int i){
	vector<int>ec;
	stack<int>st;
	st.push(i);
	while(!st.empty()){
		int x=st.top();
		if(se[i].size()!=0){
			int y=*se[i].begin();
			st.push(y);
			se[x].erase(y);
			se[y].erase(x);
		}
		else{
			st.pop();
			ec.push_back(x);
		}
	}
	for(auto x:ec){
		cout<<x<<" ";
	}
	cout<<endl;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		nhap();
		euler(1);
	}
}

