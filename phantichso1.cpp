#include<bits/stdc++.h>

using namespace std;
int n;

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
			In(v);
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
		cout<<endl;
		v.clear();
	}
}

