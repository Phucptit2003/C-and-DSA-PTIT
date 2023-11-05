#include<iostream>
using namespace std;
void check(char s){
	if(s>=65&&s<=90){
		s=s+32;
	}
	else if(s>=97&&s<=122){
		s=s-32;
	}
	cout<<s<<"\n";
}
int main(){
	int test;
	cin>>test;
	while(test--){
		char c;
		cin>>c;
		check(c);
	}
}
