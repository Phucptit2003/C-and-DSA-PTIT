#include <bits/stdc++.h>
using namespace std;
int check(int n){
	int dem = 0;
	int i;
	for (i = 1; i <= sqrt(n); i++){
if(n%i==0){
	if(i*i!=n){
			if (i % 2 == 0) dem++;
			if ((n / i) % 2 == 0) dem++;
		}
	else {
		if(i%2==0) dem++;
	} 
}	
} 
	return dem;
}
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
	    long n;
	    cin>>n;
	    cout<<check(n)<<endl;
	}
}
