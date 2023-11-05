#include<bits/stdc++.h>

using namespace std;
int n;
vector<vector<int>>tmp;
void In(vector<int>v){
	cout<<"(";
	for(int i=0;i<v.size()-1;i++){
		cout<<v[i]<<" ";
	}
	cout<<v[v.size()-1]<<") ";
}
void Back(int k,vector<int>v,int tong){
	for(int i=k;i>=1;i--){
		v.push_back(i);
		tong+=i;
		if(tong==n){
			tmp.push_back(v);
		//	In(v);
		}
		else if(tong<n) Back(i,v,tong);
		v.pop_back();
		tong-=i;
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){	
		cin>>n;
		vector<int>v;
		Back(n,v,0);
		cout<<tmp.size()<<endl;
		for(auto i:tmp){
			In(i);
		}
		cout<<endl;
		v.clear();
		tmp.clear();
	}
}

