#include <iostream>

int Tinh(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int Check(int n) {
    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            if (Tinh(i) % 3 == 0) {
                count++;
            }
            if (i != n / i && Tinh(n / i) % 3 == 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int test;
    scanf("%d",&test);
    
    while (test--) {
        int n;
        scanf("%d",&n);
        
        int result = Check(n);
        printf("%d",result);
    }
    
    return 0;
}

