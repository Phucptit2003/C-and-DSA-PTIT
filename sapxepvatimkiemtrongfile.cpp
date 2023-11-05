#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;
// sap xep chon
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int minn = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minn]) {
                minn = j; // tim gia tri min trong khoang tiep theo
            }
        }
        swap(arr[i], arr[minn]);
    }
}
// sap xep chen
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
// sap xep noi bot
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
// tim kiem nhi phan
int binarySearch(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x) {
            return mid;
        }
        if (arr[mid] > x) {
            return binarySearch(arr, l, mid-1, x);
        }
        return binarySearch(arr, mid+1, r, x);
    }
    return -1;
}

int main() {
    ifstream f;
    f.open("INPUT.txt"); // mo file

    int n;
    f >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        f >> arr[i];
    }
	
    // Selection Sort
    selectionSort(arr, n);

    // Insertion Sort
    	//insertionSort(arr, n);
    // Bubble Sort
    	//bubbleSort(arr, n);

    int x = 12;
    int result = binarySearch(arr, 0, n-1, x);

    if (result == -1) {
        cout << "NO" << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}

