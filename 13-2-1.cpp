#include <bits/stdc++.h>
using namespace std;

bool binary_search(int arr[], int n, int x) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x) return true;
        else if (arr[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return false;
}

bool check_pythagorean_triple(long long arr[], int n) {
    sort(arr, arr + n); // sort the array
    for (int i = 0; i < n; i++) {
        arr[i] = arr[i] * arr[i]; // square each element in the array
    }
    for (int i = n - 1; i >= 2; i--) {
        int c = arr[i];
        int j = 0, k = i - 1;
        while (j < k) {
            if (arr[j] + arr[k] == c) return true;
            else if (arr[j] + arr[k] < c) j++;
            else k--;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        if (check_pythagorean_triple(arr, n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

