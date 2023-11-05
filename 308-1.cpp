#include<bits/stdc++.h>
using namespace std;
int main(){
	ofstream f;
	f.open("A.txt");
	int n;
	cin>>n;
	cin.ignore();
	string name;
	for(int i=1;i<=n;i++){
		getline(cin,name);
		f<<name<<endl;
	}
	f.close();
}
