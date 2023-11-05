#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		int k;
		cin>>s>>k;
		int dem=0;
		for(int i=0;i<s.size();i++){
			set<char>st;
			for(int j=i;j<s.size();j++){
				st.insert(s[j]);
				if(st.size()==k) {
					dem++;
				}
				if(st.size()>k) break;
			}
		}
		cout<<dem<<endl;
	}
}

