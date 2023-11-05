#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		string s1,s2;
		cin>>s1>>s2;
		int v[s1.size()+1][s2.size()+1];
		for(int i=0;i<=s1.size();i++){
			v[i][0]=0;
		}
		for(int i=0;i<=s2.size();i++){
			v[0][i]=0;
		}
		for(int i=0;i<s1.size();i++){
			for(int j=0;j<s2.size();j++){
				if(s1[i]==s2[j]){
					v[i+1][j+1]=v[i][j]+1;
				}
				else v[i+1][j+1]=max(v[i+1][j],v[i][j+1]);
			}
		}
		cout<<v[s1.size()][s2.size()]<<endl;
	}
}

