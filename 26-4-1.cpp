#include <bits/stdc++.h>
using namespace std;
int Stop = 0;
int q[100];
int d[100];
int vs[100];
int e[100];
int fl[100][100];
void FindPath()
{
    int cq, dq, u, v;
    for (u = 1; u <= n; u++)
        vs[u] = 0;
    cq = 1;
    dq = 1;
    q[cq] = s;
    vs[s] = 1;
    e[s] = 0;
    d[s] = 10000;
    while (dq <= cq)
    {
        u = q[dq];
        dq++;
        for (v = 1; v <= n; v++)
            if (vs[v] == 0)
            {
                if (c[u][v] > 0 && fl[u][v] < c[u][v])
                {
                    e[v] = u;
                    d[v] = (d[u] < c[u][v] - fl[u][v]) ? d[u] : c[u][v] - fl[u][v];
                    cq++;
                    q[cq] = v;
                    vs[v] = 1;
                    if (v == t)
                        return;
                }
                if (c[v][u] > 0 && fl[v][u] > 0)
                {
                    e[v] = -u;
                    d[v] = (d[u] < fl[v][u]) ? d[u] : fl[v][u];
                    cq++;
                    q[cq] = v;
                    vs[v] = 1;
                    if (v == t)
                        return;
                }
            }
    }
    Stop = 1;
}
int augment() {
    int u, v, flow;
    flow = d[t];
    v = t;
    while (v != s) {
        u = abs(e[v]);
        if (e[v] > 0) {
            fl[u][v] += flow;
        } else {
            fl[v][u] -= flow;
        }
        v = u;
    }
    return flow;
}
int fordFulkerson() {
    int maxFlow = 0;
    while (true) {
        FindPath();
        if (Stop == 0) break;
        maxFlow += augment();
    }
    return maxFlow;
}
int main() {
    ifstream cin("DT.INP");
    ofstream cout("DT.OUT");

    cin >> n;
    s = 1;
    t = n;

    for(int u = 1; u <= n; u++) {
        for(int v = 1; v <= n; v++) {
            cin >> c[u][v];
            fl[u][v] = 0;
        }
    }

    int maxFlow = fordFulkerson();

    cout << maxFlow << endl;
    for(int u = 1; u <= n; u++) {
        for(int v = 1; v <= n; v++) {
            cout << fl[u][v] << " ";
        }
        cout << endl;
    }

    return 0;
}
