#include<bits/stdc++.h>

using namespace std;
int n,s;
int a[35];
bool check;
void Try(int m,int tong=0,int cnt=0){
	if(tong>s||check==true) return;
	if(tong==s){
		check=true;
		cout<<cnt<<endl;
		return;
	}
	for(int i=m;i<n;i++){
		Try(i+1,tong+a[i],cnt+1);
	}
}
int main(){	
	cin>>n>>s;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,greater<int>());
	check=false;
	Try(0);
	if(check==false){
		cout<<-1<<endl;
	}
}

