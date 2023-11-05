#include<bits/stdc++.h>

using namespace std;
int n;
string s;
vector<char>tmp;
vector<vector<char>>res;
bool Sort(string a,string b){
	return a<b;
}
void Try(int i){
	if(i>=n) return;	
	for(int j=i;j<n;j++){
		tmp.push_back(s[j]);
		res.push_back(tmp);
		Try(j+1);
		tmp.pop_back();
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){	
		cin>>n;	
		cin>>s;
		Try(0);
//		sort(res.begin(),res.end(),Sort);
		for(auto x:res){
			for(auto j:x){
				cout<<j;
			}
			cout<<" ";
		}
		cout<<endl;
		res.clear();
		tmp.clear();
	}
}

