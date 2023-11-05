#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	deque<int>dq;
	string s;
	while(cin>>s){
		if(s=="PUSHBACK"){
			int x;cin>>x;
			dq.push_back(x);
		}
		else if(s=="PUSHFRONT"){
			int x;cin>>x;
			dq.push_front(x);
		}
		else if(s=="POPFRONT"&&dq.size()){
				dq.pop_front();
		}
		else if(s=="PRINTFRONT"){
			if(!dq.empty()){
				cout<<dq.front()<<endl;
			} else cout<<"NONE\n";
		}
		else if(s=="PRINTBACK"){
			if(!dq.empty()){
				cout<<dq.back()<<endl;
			} else cout<<"NONE\n";
		}
		else if(s=="POPBACK"&&dq.size()){
			dq.pop_back();
		}
	}
}

