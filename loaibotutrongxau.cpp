#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[100];
	cin.getline(s,100);
    char c[100];
    cin.getline(c,100);
    char *p;
    int length=strlen(c);
    p=strstr(s,c);
    strcpy(p,p+length);
    cout<<s;
}
