#include<bits/stdc++.h>

using namespace std;
int path[8]={(-1,-1),(-1,0),(-1,1),(0,-1),(0,1),(1,-1),(1,0),(1,1)};
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int dem,dem1;
	int cnt=0;
	while(1){
		dem=dem1=-1;
		for(int i=0;i<8;i++){
			dem=min(abs(c-path[i].first),dem);
			dem1=min(abs(d-path[i].second),dem1);
		}
		a=a+dem;
		b=b+dem1;
		cnt++;
		if(a==c&&b==d){
			cout<<cnt;
			return;
		}
	}
}

