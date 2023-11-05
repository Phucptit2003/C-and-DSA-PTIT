#include <stdio.h>

int main() {
    int rectangles[3][2];
    for (int i = 0; i < 3; i++) {
        scanf("%d %d", &rectangles[i][0], &rectangles[i][1]);
    }
    int dttong = 0;
    for (int i = 0; i < 3; i++) {
        dttong += rectangles[i][0] * rectangles[i][1];
    }
    
    if (dttong % 4 != 0) {
        printf("NO");
    } 
	else {
        int canhhv = dttong / 2;
        int check = 1;
        for (int i = 0; i < 3; i++) {
            int w = rectangles[i][0], h = rectangles[i][1];
            if (w > canhhv || h > canhhv || w * h < canhhv * (dttong / 2)) {
                check = 0;
                break;
            }
        }
        
        if (check==1) {
            printf("YES");
        } else {
            printf("NO");
        }
    }
}
