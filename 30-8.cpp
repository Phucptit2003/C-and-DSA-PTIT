#include<bits/stdc++.h>
using namespace std;
int main(){
	FILE *f;
	f=fopen("A.txt","out");
	int n;
	cin>>n;string name;
	cin.ignore();
	for(int i=1;i<=n;i++){
		getline(cin,name);
}
    for(int i=1;i<=n;i++){
    	fcout<<name;
	}
	fclose(f);
}
