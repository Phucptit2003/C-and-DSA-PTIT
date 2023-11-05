#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	stack<int>st;
	int x;
//	vector<int>v;
//	stack<int>st1;
	while(cin>>s){
		if(s=="push"){			
			cin>>x;
			st.push(x);
		}
		else if(s=="pop"){
			if(!st.empty())
				st.pop();
			else{
				cout<<"empty\n";
				break;
			}
		}
		else if(s=="show"){
			if(st.empty()){
				cout<<"empty\n";
				break;
			}
			vector<int>v;
			while(!st.empty()){
				int x=st.top();
				v.push_back(x);
				st.pop();
			}
			for(int i=v.size()-1;i>=0;i--){
				st.push(v[i]);
				cout<<v[i]<<" ";
			}
			cout<<endl;
		}
	}
}

