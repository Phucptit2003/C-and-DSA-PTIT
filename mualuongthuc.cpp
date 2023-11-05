#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n,m,s;
		cin>>n>>s>>m;
		if(m*s>(s-s/7)*n) cout<<-1<<endl;
		else{
			for(int i=1;i<=s-s/7;i++){
				if(n*i>=m*s){
					cout<<i<<endl;
					break;
				}
			}
		}
	}
}

