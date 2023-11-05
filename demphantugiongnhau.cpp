#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n][n];
		multiset<int>ms;
		for(int i=0;i<n;i++){
		    set<int>s;
			for(int j=0;j<n;j++){
				cin>>a[i][j];
				s.insert(a[i][j]);
			} for(auto x:s){
				ms.insert(x);
			}
		} int res=0;
       vector<int>v;
       for(auto x:ms) v.push_back(x);
       for(int i=0;i<v.size();i++){
       	int dem=1;
       	while(v[i]==v[i+1]){
       		dem++;
       		i++;
		   }
		   if(dem==n) res++;
	   }
	   cout<<res<<endl;
	}	
}
