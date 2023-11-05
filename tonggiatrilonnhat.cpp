#include <bits/stdc++.h>
using namespace std;

const int MAXN = 5005;
int n, M, w[MAXN], v[MAXN], dp[MAXN][MAXN];

void Knapsack() {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= M; j++) {
            dp[i][j] = dp[i-1][j];
            if (j >= w[i]) dp[i][j] = max(dp[i][j], dp[i-1][j-w[i]] + v[i]);
        }
    }
	cout<<dp[n][M]<<endl;
}

int main() {
    cin >> n >> M;
    for (int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
    }
    Knapsack();
    return 0;
}
