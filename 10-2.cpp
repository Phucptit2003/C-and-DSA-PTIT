#include <iostream>
using namespace std;

void gcd(int a, int b) {
    if (b == 0) {
        cout<< a<<endl;
    }
    cout<<b<<" "<<a%b<<endl;
    return gcd(b, a % b);
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    gcd(a,b);
 //   cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
    return 0;
}

