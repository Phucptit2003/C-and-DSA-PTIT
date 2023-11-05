#include <stdio.h>

void Doi(long long int n) {
    char hexa[20];
    int i = 0;
    
    while (n > 0) {
        int rem = n % 16;
        if (rem < 10) {
            hexa[i] = rem + '0';
        } else {
            hexa[i] = rem - 10 + 'A';
        }
        n /= 16;
        i++;
    }
    
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexa[j]);
    }
    printf("H");
    printf("\n");
}

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        long long int N;
        scanf("%lld", &N);
        
        Doi(N);
    }
    
    return 0;
}

