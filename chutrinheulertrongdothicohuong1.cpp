#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int v,e;
		cin>>v>>e;
		int deg_in[1005]={0};
		int deg_out[1005]={0};
		int x,y;
		for(int i=1;i<=e;i++){
			cin>>x>>y;
			deg_out[x]++;
			deg_in[y]++;
		}
		int cnt=0;
		int check=1;
		for(int i=1;i<=v;i++){
			cnt+=(abs(deg_in[i]-deg_out[i]));
			if(cnt>2 || abs(deg_in[i]-deg_out[i])>1||!deg_in[i]||!deg_out[i]){
				check=0;
				break;
			}
		}
		cout<<check<<endl;
	}
}

