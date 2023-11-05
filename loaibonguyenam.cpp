#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	char c;
	for(int i=0;i<(int)s.size();i++){
		c=tolower(s[i]);
		if(c!='a'&&c!='u'&&c!='e'&&c!='o'&&c!='i'&&c!='y')
		cout<<"."<<c;
	}
}
