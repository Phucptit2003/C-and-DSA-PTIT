#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int n=0;
		int chan=0,le=0;
		char kitu=' ';
		while(kitu!='\n'){
			int x;
			cin>>x;
			n++;
			if(x%2==0) chan++;
			else le++;
			kitu=getchar();
		}
		if((n%2==0&&chan>le)||(n%2==1&&le>chan)) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
