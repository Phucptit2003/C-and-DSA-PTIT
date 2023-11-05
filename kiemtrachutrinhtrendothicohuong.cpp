#include<bits/stdc++.h>

using namespace std;
int v,e,x,y;

int check;

void dfs(int x, vector<vector<int>> &a, vector<int> &vs)
{
    if(check) return;
    vs[x] = 1;
    for(int &i : a[x])
    {
        if(vs[i]==0) dfs(i, a, vs);
        else if(vs[i] == 1)
        {
            check = 1;
            return;
        }
    }
    vs[x] = 2;
}

int main(){
	int test;
	cin>>test;
	while(test--){		
		cin>>v>>e;
		vector<vector<int>>a(v+5);
		vector<int>vs(v+5,0);
		check=0;
		for(int i=1;i<=e;i++){
			cin>>x>>y;
			a[x].push_back(y);
		}
		for(int i=1;i<=v;i++){
			if(check) break;
			else if(vs[i]==0) dfs(i,a,vs);
		}
		if(check) cout<<"YES\n";
		else cout<<"NO\n";
	}
}

