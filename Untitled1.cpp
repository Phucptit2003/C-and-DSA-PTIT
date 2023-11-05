#include<iostream>
#include<string>
using namespace std;

int main(){
	char s;
	int n=strlen(s);
	for(int i=0;i<n;i++){
		cin>>s[i];
    }
    for(int i=0;i<n;i++){
    	if(s[i]!=s[n-1-i]) 
		{
		cout<<"Xau khong doi xung";
		break;}
		
	} cout<<"Xau doi xung";
}
