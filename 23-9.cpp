#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int l=s.size()-1;
    while((s[l]-'0')==0) l--;
    for(int i=l;i>=0;i--){
    	cout<<s[i];
	}
}

