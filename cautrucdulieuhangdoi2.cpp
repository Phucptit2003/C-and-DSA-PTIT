#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	queue<int>qe;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		if(s=="PUSH"){
			int x;
			cin>>x;
			qe.push(x);
		}
		if(s=="PRINTFRONT"){
			if(!qe.empty()) cout<<qe.front()<<endl;
			else cout<<"NONE\n";
		}
		if(s=="POP"){
			if(!qe.empty()) qe.pop();
		}
	}
}

