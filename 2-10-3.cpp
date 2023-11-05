#include<bits/stdc++.h>
using namespace std;
bool cmp(char &a,char &b){
	return a<b;
}
void chuanhoa(string &a){
	sort(a.begin(),a.end(),cmp);
	cout<<a;
}
int main(){
     int test;
     cin>>test;
     while(test--){
     	string s;
     	cin>>s;
     	stringstream ss(s);
     	vector<char>v;
     	char d;
     	while(ss>>d) v.push_back(d);
        string res="";
        int dem=0;
        for(int i=0;i<v.size();i++){
        	if(!isdigit(v[i])){
        		res+=v[i];
			}
			if(isdigit(v[i])){
				dem+=v[i]-'0';
			}
		}
		chuanhoa(res);
		cout<<dem<<endl;
	 }
}

