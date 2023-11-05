#include<bits/stdc++.h>
using namespace std;
int main(){string s;
	ifstream f;
	ofstream g;
	f.open("PTIT.in");
	g.open("PTIT.out");
	
	while(f>>s){
		g<<s<<endl;
	}
	f.close();
	g.close();
}
