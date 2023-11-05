#include<bits/stdc++.h>
using namespace std;
void xuly(string s){
	int l=s.size()-1;
    	while(l>=1&&s[l]>=s[l-1]){
    		l--;
		}
		if(l==0){
		  cout<<-1<<endl;
		  return;	
		}
		l--;
		int i=s.size()-1;
		while(s[i]>=s[l]||s[i]==s[i-1]) i--;
		swap(s[i],s[l]);
		cout<<s<<endl;
}
int main(){
    int test;
    cin>>test;
    while(test--){
    	string s;
    	cin>>s;
    	xuly(s);
	}
}

