#include<bits/stdc++.h>
using namespace std;
void chuanhoa(string &a){
	for(int i=0;i<a.size();i++){
		a[i]=tolower(a[i]);
	}
}
bool check(string &a,string &b){
	 return a<b;
}
int main(){
   ifstream f;
   f.open("VANBAN.in.txt");
   string a;
   vector<string>v;
   while(f>>a){
   	 v.push_back(a);
   }
   for(int i=0;i<v.size();i++){
   	chuanhoa(v[i]);
   }
   sort(v.begin(),v.end(),check);
   cout<<v[0]<<endl;
  for(int i=1;i<v.size();i++){     
  	if(v[i]!=v[i-1]){
  		cout<<v[i]<<endl;
	  }
	}
   f.close();
}

