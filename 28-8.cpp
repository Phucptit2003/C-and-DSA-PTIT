#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin>>n;
	int a[n]; 
	map<int,int>p;
	for(int i=0;i<n;i++) 
	{
		cin>>a[i];
		p[a[i]]++;
	}
	long long dem=0;
	for(auto x:p)
	{
		long long c=x.second;
		if(c>=2)
		{
			dem+=(c-1)*(c)/2; 
		}
	}
	cout<<dem<<endl;
}
