#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		int tim=s.find("084");
		string kq=s.erase(tim,3);
		cout<<kq<<endl;
	}
}
