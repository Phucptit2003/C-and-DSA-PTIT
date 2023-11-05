#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	vector<int>L{a+2,a+7};
	cout<<L.size()<<endl;
	for(auto x:L){
		cout<<x<<" ";
	}
	cout<<endl;
	cout<<L.begin()+1<<" "<<L[L.size()-1];
}
