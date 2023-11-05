#include <bits/stdc++.h>
using namespace std;
int dem(int n)
{
	int count = 0, i;
	for (i = 1; i <= sqrt(n); i++)
	{

	
		if (n % i == 0)
		{
			if (i % 2 == 0)
			{
				count++;
			}
			if ((n / i) % 2 == 0)
			{
				count++;
			}
		}
	}
	
//	i--;
	if ((i * i == n) && (i % 2 == 0))
	{
		count--;
	}

	return count;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    long n;
	    cin>>n;
	    cout<<dem(n)<<endl;
	}
}
