#include<bits/stdc++.h>

using namespace std;	
long long n,s;
long long a[35];
bool check=false;
int res = INT_MAX;
void Try(int m,int tong=0,int cnt=0){
	if(tong>s || check==true) return;
	if(tong==s){
		check=true;
//		res = min(res,cnt);
		cout<<cnt;
		return;
	}
	for(int i=m;i<n;i++){
		Try(i+1,tong+a[i],cnt+1);
	}
//	return;
}

int main(){
	cin>>n>>s;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	check=false;
	sort(a,a+n,greater<long long>());
	Try(0);
	if(check==false) cout<<-1;
//	else cout << res;
