#include<bits/stdc++.h>
using namespace std;
int main(){
     ifstream f;
     f.open("DATA4.in.txt");
     int m,n;
     f>>n;
     f>>m;
     cout<<m<<" "<<n<<endl;
     int a[n];
     int b[m];
     for(int i=0;i<n;i++){
     	f>>a[i];
	 }
	 for(int j=0;j<m;j++){
	 	f>>b[j];
	 }
	 vector<int>v;
	 for(int i=0;i<n;i++){
	 	for(int j=0;i<m;j++){
	 		if(a[i]==b[j]){
	 			v.push_back(a[i]);
	 			break;
			 }
		 }
	 }
	 for(auto x:v){
	 	cout<<x<<" ";
	 }
	 f.close();
}

