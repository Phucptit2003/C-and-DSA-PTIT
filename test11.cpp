#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int sum=0;
    int val=1;
    short N;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
    	val*=i;
    	sum+=val;
	}
	cout<<sum;
    return 0;
}

