#include <bits/stdc++.h>
 using namespace std; 
 int main(){ int t; cin>>t; while(t--){ int n; cin>>n; int a[n][n]; map<int,int> mp; for(int i=0;i<n;i++){ for(int j=0;j<n;j++){ cin>>a[i][j]; } } for(int i=0;i<n;i++){ mp[a[0][i]]=1; } for(int i=1;i<n;i++){ for(int j=0;j<n;j++){ if(mp[a[i][j]]==i) mp[a[i][j]]++; } } int dem=0; for(auto it:mp){ if(it.second==n) dem++; } cout<<dem<<endl; } }
