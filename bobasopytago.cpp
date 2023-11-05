#include <bits/stdc++.h>
using namespace std;

bool findPair(long long arr[], int n)
{
    unordered_set<long long> hash;
    for (int i = 0; i < n; i++)
        hash.insert(arr[i] * arr[i]);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            long long sum = arr[i] * arr[i] + arr[j] * arr[j];
            if (hash.find(sum) != hash.end())
                return true;
        }
    }

    return false;
}

int main()
{
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        if (findPair(arr, n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

