#include<bits/stdc++.h>
using namespace std;
long long s=0,MAX=2147483647;
void Do(string p){
	if(p.size()>10) return;
	long long ss=0;
	int bd=0;
	if(p[0]=='-') bd=1;
	for(int i=bd;i<p.size();i++){
		if(p[i]<'0'||p[i]>'9') return;
	}
	for(int i=bd;i<p.size();i++){
		ss=ss*10+p[i]-'0';
    }
	if(bd==1) ss=ss*(0-1);
	if(ss<=MAX&&ss>=(0-1)*MAX) s+=ss;
}
int main(){
    freopen("DATA.in","r",stdin);
    string a;
    while(cin>>a){
    	Do(a);
	}
	cout<<s;
}

