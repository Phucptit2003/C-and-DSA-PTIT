#include <stdio.h>

int main() {
    
    int n;
	scanf("%d",&n);
	int nums[n];
	for(int i=0;i<n;i++){
		scanf("%d",&nums[i]);
	}
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int is_i_prime = 1;
            int is_j_prime = 1;
            for (int k = 2; k * k <= nums[i]; k++) {
                if (nums[i] % k == 0) {
                    is_i_prime = 0;
                    break;
                }
            }
            for (int k = 2; k * k <= nums[j]; k++) {
                if (nums[j] % k == 0) {
                    is_j_prime = 0;
                    break;
                }
            }
            if (is_i_prime && is_j_prime) {
                int a = nums[i];
                int b = nums[j];
                while (b != 0) {
                    int temp = a % b;
                    a = b;
                    b = temp;
                }
                if (a == 1) {
                    count++;
                }
            }
        }
    }
    printf("%d", count);
    return 0;
}
