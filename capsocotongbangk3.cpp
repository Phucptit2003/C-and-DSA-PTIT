#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        unordered_map<int, int> m;
        long long cnt = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (m.count(k - a)) {
                cnt +=(long long) m[k - a];
            }
            if (m.count(a)) {
                m[a]++;
            } else {
                m[a] = 1;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
