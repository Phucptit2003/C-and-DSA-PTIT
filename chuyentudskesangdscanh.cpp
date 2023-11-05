#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	string s;
	int i=1;	
	vector<vector<int>>v(n+1);
	while(i<=n){
		scanf("\n");
		getline(cin,s);
		stringstream ss(s);
		int tmp;
		while(ss>>s){
			tmp=stoi(s);
			v[i].push_back(tmp);
		}
		i++;
	}
	for(int i=1;i<=n;i++){
		sort(v[i].begin(),v[i].end());
		for(int &j:v[i]) 
			if(j>i)
				cout<<i<<" "<<j<<endl;
	}
}

