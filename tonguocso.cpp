#include <iostream>
using namespace std;

int sumOfDivisors(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int a, b;
    cin >> a >> b;

    int count = 0;
    for (int i = a; i <= b; i++) {
        int sum = sumOfDivisors(i);
        if (sum > i) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
