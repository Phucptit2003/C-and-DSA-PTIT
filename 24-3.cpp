#include <stdio.h>
 
int main()
{
    int t ;
    scanf("%d",&t);
    while(t--){
        char c;
        while(scanf("%c",&c) != -1){
            if( c >= 97 && c <= 122) printf("%c",c);
            printf("\n");
        }   
        printf("\n");
    }
    return 0;
}
