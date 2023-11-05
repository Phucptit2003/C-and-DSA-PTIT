#include<bits/stdc++.h>
using namespace std;
void chec
int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		stringstream ss(s);
		vector<char>c;
		char d;
		while(ss>>d) c.push_back(d);
		for(int i=0;i<c.size();i++){
			if(c[i]>='A'&&c[i]<='Z'){
				for(int j=i+1;j<c.size();j++){
					if(s[i]>s[j]){
						int temp=s[i];
						s[i]=s[j];
						s[j]=temp;
					}
				}
			}
			else if(s[i]>='0'&&s[i]<'9'){
				
			}
		}
	}
}
