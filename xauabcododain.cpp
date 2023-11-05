#include<bits/stdc++.h>

using namespace std;
int n;
void Xuly(string s){
	if(s.size()==n){
		cout<<s<<" ";
		return;
	} else{
		Xuly(s+'A');
		Xuly(s+'B');
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n;
		Xuly("");
		cout<<endl;
	}
}

