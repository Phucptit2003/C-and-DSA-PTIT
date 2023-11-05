#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int fact[1000005];
int inv_fact[1000005];

int power(int x, int y) {
    int res = 1;
    x = x % mod;
    while (y > 0) {
        if (y & 1) res = (res * x) % mod;
        y = y >> 1;
        x = (x * x) % mod;
    }
    return res;
}

int modInverse(int n) {
    return power(n, mod - 2);
}

void precompute() {
    fact[0] = 1;
    for (int i = 1; i <= 1000000; i++)
        fact[i] = (fact[i - 1] * i) % mod;
    inv_fact[1000000] = modInverse(fact[1000000]);
    for (int i = 1000000 - 1; i >= 0; i--)
        inv_fact[i] = (inv_fact[i + 1] * (i + 1)) % mod;
}

int nCr(int n, int r) {
    if (r > n) return 0;
    int num = fact[n];
    int den = (inv_fact[r] * inv_fact[n - r]) % mod;
    return (num * den) % mod;
}

int A[1000005];
map<int, int> freq;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        freq[A[i]]++;
    }
    precompute();
    int ans = 1;
    for (auto x : freq) {
        int cnt = x.second;
        ans = (ans * nCr(n, cnt)) % mod;
        n -= cnt;
    }
    cout << ans << endl;
    return 0;
}

