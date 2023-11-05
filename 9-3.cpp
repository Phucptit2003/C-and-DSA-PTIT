#include<bits/stdc++.h>

using namespace std;
int n;
void Try(int n,char bd, char dich,char tg){
	if(n==1){
		cout<<bd<<" -> "<<dich<<endl;
		return;
	}	
	Try(n-1,bd,tg,dich);
	cout<<bd<<" -> "<<dich<<endl;
	Try(n-1,tg,dich,bd);
}
int main(){	
	cin>>n;
	Try(n,'A','C','B');
}

