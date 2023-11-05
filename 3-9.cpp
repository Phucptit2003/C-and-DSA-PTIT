#include <stdio.h>

int main()
{
    int *A;
    int n = 0;
    int number;
    FILE *f = fopen("DATA.in", "r");

    // Dem so luong phan tu co trong file
    while (fscanf(f, "%d", &number) > 0)
        n++;

    // Cap phat bo nho cho mang A
    A = new int[n];

    // Quay tro lai file de doc du lieu vao mang A
    fseek(f, 0, SEEK_SET);
    for (int i = 0; i < n; i++)
        fscanf(f, "%d", &A[i]);

    // Xuat mang da doc
    for (int i = 0; i < n; i++)
        printf("%5d", A[i]);
}

