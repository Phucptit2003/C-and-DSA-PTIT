#include<bits/stdc++.h>
using namespace std;
int main(){
     int test;
     cin>>test;
     while(test--){
     	int n;
     	cin>>n;
     	int a[n][n];
     	for(int i=0;i<n;i++){
     		for(int j=0;j<n;j++){
     			cin>>a[i][j];
			 }
		 }
		 vector<int>v;
		 vector<int>v1;
		 int sum=0;
		 int dem=0;
		 int max;
		 for(int i=0;i<n;i++){
		 	for(int j=0;j<n;j++){
		 		sum+=a[i][j];
			 }
			 v.push_back(sum);
			 sum=0;
		 }
		 for(int j=0;j<n;j++){
		 	for(int i=0;i<n;i++){
		 		sum+=a[i][j];
		 	}
		 		v1.push_back(sum);
			 sum=0;
		 }
		sort(v.begin(),v.end());
		sort(v1.begin(),v1.end());
		if(v[v.size()-1]<v1[v1.size()-1]) max=v1[v1.size()-1];
		else max=v[v.size()-1];
		for(int i=0;i<v.size();i++){
			if(v[i]!=max){
				dem+=max-v[i];
			}
		}
		cout<<dem<<endl;
	 }
}

