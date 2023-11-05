#include<bits/stdc++.h>
using namespace std;
#define p 1000000007
int main(){
    long long a;
	long long n;
    cin>>a>>n;
    long long tich=1;
    tich=pow(a%p,n);
	cout<<tich;
}

