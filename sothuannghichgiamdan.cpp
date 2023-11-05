#include<bits/stdc++.h>
using namespace std;
int check(string &s){
	int l=s.size();
	if(l<2) return 0;
	for(int i=0;i<l;i++){
		if(s[i]-'0'!=s[l-1-i]-'0') return 0;
	}
	return 1;
}
int main(){
      string s;
      vector<string>v;
      vector<string>v1;
      map<string,int>mp;
   while(cin>>s){
		v.push_back(s);
		}

	for(int i=0;i<v.size();i++){
      	if(check(v[i])) {   
		    v1.push_back(v[i]);
		    mp[v[i]]++;
		}
	}
	for(int i=0;i<v1.size();i++){
		for(int j=i+1;j<v1.size();j++){
			if(v1[i].length()==v1[j].length()){
			if(v1[i]<v1[j]) swap(v1[i],v1[j]);}
			else {
				if(v1[i].length()<v1[j].length()) swap(v1[i],v1[j]);
			}
		}
	}
    for(int i=0;i<v1.size();i++){
    	if(mp[v1[i]]!=0)
        cout<<v1[i]<<" "<<mp[v1[i]]<<endl;
        for(int j=i+1;j<v1.size();j++){
        	if(v1[i]==v1[j]) mp[v1[j]]=0;
		}
	} 
}

