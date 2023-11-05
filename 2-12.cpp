#include<bits/stdc++.h>

using namespace std;
int Check(int i,char c){
	int n=c-'0';
	if((n+i)%2==0) return 1;
	else return 0;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		long long n;
		cin>>n;
		if(n<0)n*=-1;
		string s=to_string(n);
		int check=1;
		for(int i=0;i<s.size();i++){
			if(s[i]>='0'&&s[i]<='9'){
				if(Check(i+1,s[i])==0){
					check=0;
					break;
				}
			}
		}
		if(check==0) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
}

