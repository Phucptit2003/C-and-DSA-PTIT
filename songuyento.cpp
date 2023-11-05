#include<bits/stdc++.h>

using namespace std;
int n,pt,s,sum;
vector<int>v;
//void Try(int m){
//	if(m>=n||sum>s) return;
//	for(int i=)
//}
int main(){
	int p[205]={1};
	p[0]=p[1]=0;
	for(int i=2;i<=sqrt(205);i++){
		if(p[i]==1){
			for(int j=i*i;j<205;j+=i){
				p[j]=0;
			}
		}
	}
	int test;
	cin>>test;
	while(test--){		
		cin>>n>>pt>>s;
		v.clear();
		for(int i=pt+1;i<s;i++){
			if(p[i]==1){
				v.push_back(p[i]);
		//		cout<<1<<endl;
			}
		}
//		Try(0);
		for(auto x:v){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}

