#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	while (a*b != 0) {
    long long temp = a % b;
    a = b;
    b = temp;
  }
  cout<< a + b;
}
