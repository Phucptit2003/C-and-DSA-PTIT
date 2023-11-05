#include<bits/stdc++.h>

using namespace std;
int n;
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n;
		int check=0;
		for(int k=n/7;k>=0;k--){
			int cur=n-7*k;
			if(cur%4==0){
				check=1;
				for(int i=0;i<cur/4;i++) cout<<"4";
				for(int i=0;i<k;i++) cout<<"7";
				cout<<endl;
				break;
			}
		}
		if(check==0) cout<<-1<<endl;
	}
}

