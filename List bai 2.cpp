#include<bits/stdc++.h>
using namespace std;
int main(){
     list<int>ls;
     list<int>ls1;
     int n;
     cin>>n;
     int a[n+1];
     for(int i=1;i<=n;i++){
     	cin>>a[i];
     	ls.push_back(a[i]);
	 }
	 ls1.push_back(ls.back());
	 int dem=0;
	 for(int x:ls){
	 	dem++;
	 	if(dem!=ls.size()){
	 		ls1.push_back(x);
		 }
	 }
	 for(int x:ls1){
	 	cout<<x<<" ";
	 }
}

