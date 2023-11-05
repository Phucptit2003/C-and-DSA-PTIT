#include <stdio.h>
#include <string.h>

int xuli(char a[][100], int n){
    int res = 9999;
    int tong = 0;
    for(int i = 0 ; i < strlen(a[0]); i++){
        tong = 0;
        tong = tong + i;
        char s[100];
        strncpy(s, &a[0][i], strlen(a[0])/2);
        s[strlen(a[0])/2] = '\0';
        for(int j = 1 ; j < n ; j++){
            if(strstr(a[j], s) == NULL || strstr(a[j], s) > a[j] + 1000) 
                return -1;
            tong += strstr(a[j], s) - a[j];
        }
        res = (res < tong) ? res : tong;
    }
    return res;
}

int main(){
    int n;
    scanf("%d", &n);
    char a[50][100];
    for(int i = 0 ; i < n; i++){
        scanf("%s", a[i]);
        strcat(a[i], a[i]); 
    }
    printf("%d", xuli(a, n));
    return 0;
}

