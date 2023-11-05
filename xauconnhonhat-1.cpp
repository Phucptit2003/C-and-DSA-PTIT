#include <bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		string a,b;
		cin>>a>>b;
		int c[50]={},n=a.size(),s=1e6,l,r;
		for(int i=0;i<b.size();i++) c[b[i]-'a']++;
		for(int i=0;i<n;i++){
			int d[50]={};
			for(int j=i;j<n;j++){
				d[a[j]-'a']++;
				int ok=0;
				for(int k=0;k<50;k++){
					if(d[k]<c[k]){
						ok=1;
					//	cout<<k<<endl;
						break;
					}
				}
				if(ok==0&&s>j-i+1){
					s=j-i+1;
					l=i;r=j;
				//	cout<<s<<endl;
				}
			}
		}
		if(s==1e6) 
		    cout<<-1<<endl;
		else{
			for(int i=l;i<=r;i++) cout<<a[i];
			cout<<endl;
		}
	}
}
