#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	int t=a[n-1];
	int max1=max(a[0]*a[1],a[0]*a[1]*t);
	int max2=max(a[n-2]*a[n-1],a[n-3]*a[n-2]*a[n-1]);
	int max3=max(max1,max2);
	cout<<max3<<endl;
}

