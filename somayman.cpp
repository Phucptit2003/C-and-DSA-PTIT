#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
	string s;
	cin>>s;
	int len=s.size();
	int check=0;
		if(s[len-2]=='8'&&s[len-1]=='6'){
			check=1;
		}
	if(check==1) cout<<"1"<<"\n";
	else cout<<"0"<<"\n";
}
}
