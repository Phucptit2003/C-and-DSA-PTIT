#include<bits/stdc++.h>

using namespace std;

long long Trans(long long res){
	if(res==0) return 1;
	if(res==1) return 2;
	long long tmp=Trans(res/2);
	tmp*=tmp;
	if(res%2==1) tmp=tmp*2;
	return tmp;
}
long long Tich(string s){
	long long res=0;
	for(int i=0,j=s.size()-1;i<s.size();i++,j--){
		if(s[i]=='1'){
			res+=Trans(j);
		}
	}
	return res;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		string s1,s2;
		cin>>s1>>s2;
		cout<<Tich(s1)*Tich(s2)<<endl;
	}
}

