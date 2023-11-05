#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5+5;
int n, m, pos[MAXN];

bool check(int x) {
    int cnt = 1, last = pos[1];
    for (int i = 2; i <= n; i++) {
        if (pos[i] - last >= x) {
            cnt++;
            last = pos[i];

        }
    }
    return cnt >= m;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> pos[i];
    }
    sort(pos + 1, pos + n + 1);
    int left = 0, right = pos[n] - pos[1];
    while (left < right) {
        int mid = (left + right + 1) / 2;
 
        if (check(mid)) {
			left = mid;

		}
        else {
			right = mid - 1;
	
		}
    }
    cout <<left << endl;
    return 0;
}
