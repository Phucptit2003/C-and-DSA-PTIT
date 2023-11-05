#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		string tmp="";
		string str="";
		int num=0;
		for(int i=s.size()-1;i>=0;i--){
			if(isalpha(s[i])){
				if(num>0){
					str=tmp;			
					for(int i=1;i<num;i++){
						str=str+tmp;
					}
				}
				str=s[i]+str;
				num=0;
			}
			else if(s[i]=='['){
				tmp=str;
				str="";
			}
			else if(isdigit(s[i])){
				num=num*10+s[i]-'0';
			}
		}
		string t=tmp;
		for(int i=1;i<num;i++){
			tmp=tmp+t;
		}
		cout<<tmp<<endl;
	}
}

