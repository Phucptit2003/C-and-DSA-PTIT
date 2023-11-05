#include<bits/stdc++.h>

using namespace std;
int n,x;
int a[25];
vector<int>tmp;
bool check;
void Try(int i,int sum=0){
	if(sum>x) return;
	if(sum==x){
		check=true;
		cout<<"[";
		for(int i=0;i<tmp.size()-1;i++) cout<<tmp[i]<<" ";
		cout<<tmp[tmp.size()-1]<<"] ";
	}
	for(int j=i;j<=n;j++){
		tmp.push_back(a[j]);
		Try(j,sum+a[j]);
		tmp.pop_back();
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){		
		cin>>n>>x;		
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		check=false;
		Try(1);
		if(check==false) cout<<-1;
		cout<<endl;
		tmp.clear();
	}
}

