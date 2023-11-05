#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<long long>v;
	long long int tmp=1;
	v.push_back(tmp);
	while(tmp*10<=1e17){
		int s=v.size();
		tmp*=10;
		v.push_back(tmp);
		for(int i=0;i<s;i++){
			v.push_back(tmp+v[i]);
		}
	}
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		cout<<upper_bound(v.begin(),v.end(),n)-v.begin()<<endl;
	}
}

