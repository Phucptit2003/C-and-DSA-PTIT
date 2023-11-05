#include <stdio.h>

int Tong(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
bool check(int a,int b){
	int sum1,sum2;
	while(a>0 && b>0){
		sum1=a%10;
		sum2=b%10;
		if(sum1>sum2) return true;
		a/=10;
		b/=10;
	}
	return false;
}
void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            int sum1 =  Tong(arr[j]);
            int sum2 = Tong(arr[j + 1]);
            if (sum1 > sum2 || (sum1 == sum2 && check(arr[j],arr[j+1])==true)) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);  
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }   
    sortArray(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

