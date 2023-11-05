#include<bits/stdc++.h>

using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		stack<int>st;
		for(char x:s){
			if(isdigit(x)){
				st.push(x-'0');
			}
			else{
				int a=st.top();
				st.pop();
				int b=st.top();
				st.pop();
				switch(x){
					case '+': {
						st.push(a+b);
						break;
					}
					case '-' :{
						st.push(b-a);
						break;
					} 
					case '*':{
						st.push(a*b);
						break;
					}
					default: {
						st.push(b/a);
						break;
					}
				}
			}
		}
			cout<<st.top()<<endl;
	}
}

