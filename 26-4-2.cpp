#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100;

int c[MAXN+5][MAXN+5], f[MAXN+5][MAXN+5], e[MAXN+5], d[105];
int n, s = 1, t;

void findPath() {
    int q[MAXN+5], d[MAXN+5], vs[MAXN+5], e[MAXN+5];
    memset(vs, 0, sizeof(vs));
    int cq = 1, dq = 1;
    q[cq] = s;
    vs[s] = 1;
    e[s] = 0;
    d[s] = 10000;

    while (dq <= cq) {
        int u = q[dq];
        dq++;

        for (int v = 1; v <= n; v++) {
            if (vs[v] == 0) {
                if (c[u][v] > 0 && f[u][v] < c[u][v]) {
                    e[v] = u;
                    d[v] = min(d[u], c[u][v] - f[u][v]);
                    cq++;
                    q[cq] = v;
                    vs[v] = 1;
                    if (v == t) return;
                }
                if (c[v][u] > 0 && f[v][u] > 0) {
                    e[v] = -u;
                    d[v] = min(d[u], f[v][u]);
                    cq++;
                    q[cq] = v;
                    vs[v] = 1;
                    if (v == t) return;
                }
            }
        }
    }
}

int fordFulkerson() {
    int maxFlow = 0;

    while (true) {
        findPath();
        if (e[t] == 0) break;

        int pathFlow = d[t];
        for (int v = t; v != s; v = abs(e[v])) {
            int u = abs(e[v]);
            if (e[v] > 0) {
                f[u][v] += pathFlow;
            } else {
                f[v][u] -= pathFlow;
            }
        }

        maxFlow += pathFlow;
    }

    return maxFlow;
}

int main() {
    cin >> n;
    s=1,t=n;

    for (int u = 1; u <= n; u++) {
        for (int v = 1; v <= n; v++) {
            cin >> c[u][v];
            f[u][v] = 0;
        }
    }

    int maxFlow = fordFulkerson();

    cout << maxFlow << endl;
    for (int u = 1; u <= n; u++) {
        for (int v = 1; v <= n; v++) {
            cout << f[u][v] << " ";
        }
        cout << endl;
    }

    return 0;
}

