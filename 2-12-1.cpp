#include<bits/stdc++.h>

using namespace std;

vector<int>v;
int b[20]={0};
void Xuly(int n,int m){
	if(n==1){
		v.push_back(m);
		b[m]++;
	}
	if(n==2){
		for(int i=0;i<v.size();i++){
			if(v[i]==m){
				b[m]--;
				v.erase(v.begin()+i);
				break;
			}
			else continue;
		}
	}
	if(n==3){
		if(b[m]!=0){
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
}

int main(){
	int n,q;
	cin>>n;
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		v.push_back(x);
		b[x]++;
	}
	cin>>q;
	pair<int,int>path[q];
	for(int i=0;i<q;i++){
		cin>>path[i].first;
		cin>>path[i].second;
//	}
//	for(int i=0;i<q;i++){
		Xuly(path[i].first,path[i].second);
	}
}

