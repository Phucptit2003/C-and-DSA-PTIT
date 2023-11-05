#include<bits/stdc++.h>

using namespace std;

int n;

void QL(int i,char str,char mid, char end){
	if(i==1){
		cout<<str<<" -> "<<end<<endl;
		return;
	}
	QL(i-1,str,end,mid);
	cout<<str<<" -> "<<end<<endl;
	QL(i-1,mid,str,end);
}
int main(){
	cin>>n;
	QL(n,'A','B','C');
}

