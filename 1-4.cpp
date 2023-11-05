#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int binary[16], i;
    for (i = 15; i >= 0; i--) {
        binary[i] = num % 2;
        num = num / 2;
    }
    for (int j = 0; j < 16; j++) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
