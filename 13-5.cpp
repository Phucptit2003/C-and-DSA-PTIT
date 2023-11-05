#include <stdio.h>
#include <stdlib.h>

#define MAX_NUMBERS 100

int compare(const void *a, const void *b) {
    int num1 = *(int *)a;
    int num2 = *(int *)b;

    if (num1 < num2) return -1;
    if (num1 > num2) return 1;
    return 0;
}

int main() {
    FILE *sourceFile = fopen("Source.txt", "r");
    int numbers[MAX_NUMBERS];
    int count = 0;
    int number;
    while (fscanf(sourceFile, "%d", &number) == 1) {
        numbers[count] = number;
        count++;
    }

    fclose(sourceFile);

    qsort(numbers, count, sizeof(float), compare);

    FILE *outputFile = fopen("Out.txt", "w");
    for (int i = 0; i < count; i++) {
        fprintf(outputFile, "%d\n", numbers[i]);
    }

    fclose(outputFile);

    return 0;
}

