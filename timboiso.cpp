#include<bits/stdc++.h>

using namespace std;	
int main(){
	vector<long long>v;
	long long tmp=9;
	v.push_back(tmp);
	while(tmp * 10 <= 9000000999999){
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
		int x=0;
		while(v[x]%n) x++;
		cout<<v[x]<<endl;
		
	}
}

