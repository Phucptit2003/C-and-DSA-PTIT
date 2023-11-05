#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n];
		queue<int>qe;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==1){
				cout<<qe.size()<<endl;
			}
			if(a[i]==2){
				if(!qe.empty()) cout<<"NO\n";
				else cout<<"YES\n";
			}
			if(a[i]==3){
				int x;
				cin>>x;
				qe.push(x);
			}
			if(a[i]==4){
				if(!qe.empty()){
					qe.pop();
				} else continue;
			}
			if(a[i]==5){
				if(!qe.empty()){
					cout<<qe.front()<<endl;
				} 
				else cout<<-1<<endl;
			}
			if(a[i]==6){
				if(!qe.empty()){
					cout<<qe.back()<<endl;
				}
				else cout<<-1<<endl;
			}
		}
	}
}

