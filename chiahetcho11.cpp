#include<iostream>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		int sumchan=0;
		int sumle=0;
		int sum=0;
		for(int i=0;i<s.length();i++){
			if(i%2==0) sumchan+=s[i]-'0';
			else sumle+=s[i]-'0';
		}
		if(sumchan>=sumle){
			sum=sumchan-sumle;
		} else sum=sumle-sumchan;
		if(sum%11==0) cout<<"1"<<"\n";
		else cout<<"0"<<"\n";
	}
}
