#include<bits/stdc++.h>
using namespace std;
int n,m,q;
int a[1005][1005];
void solve()
{
   cin>>n>>m>>q;
   for(int i=1;i<=n;i++)
   {
        for(int j=1;j<=n;j++) 
        {
            if(i!=j) a[i][j]=100000000;
            else a[i][j]=0;
        }
   }
   for(int i=1;i<=m;i++)
   {
        int x,y,z;
        cin>>x>>y>>z;
        a[x][y]=z;
   }
   for(int i=1;i<=n;i++)
   {
        for(int j=1;j<=n;j++) 
        {
            for(int z=1;z<=n;z++) 
            {
                a[j][z] = min(a[j][z],max(a[j][i],a[i][z]));
            }
        }
   }
   while(q--)
   {
        int u,v;
        cin>>u>>v;
        if(a[u][v]==100000000) cout<<-1<<'\n';
        else cout<<a[u][v]<<'\n';
   }
}
int main()
{
    solve();
}
