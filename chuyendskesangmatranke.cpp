#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;	
	vector<vector<int>>v(n+1,vector<int>(n+1,0));
	cin.ignore();
	string s;
	for(int i=1;i<=n;i++){
		getline(cin,s);
		stringstream ss(s);
		while(ss>>s){
			int tmp=stoi(s);
			v[tmp][i]=v[i][tmp]=1;
		}
	}
	for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cout<<v[i][j]<<" ";
			}
			cout<<endl;
	}
}

