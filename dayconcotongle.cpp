#include<bits/stdc++.h>

using namespace std;
int n;
int a[20];
vector<int>tmp;
vector<vector<int>>res;
bool Sort(string &a,string &b){
	return a<=b;
}
void Try(int i,int sum=0){
	if(sum%2==1){
		res.push_back(tmp);
	}
	for(int j=i;j<=n;j++){
		tmp.push_back(a[j]);
		Try(j+1,sum+a[j]);
		tmp.pop_back();
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a+1,a+n+1,greater<int>());
		Try(1);
		sort(res.begin(),res.end());
		for(auto &x:res){
			for(auto &j:x){
				cout<<j<<" ";
			}	
			cout<<endl;
		}
		tmp.clear();
		res.clear();
	}
}
