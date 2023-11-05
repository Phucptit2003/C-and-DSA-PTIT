#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e3;

int c[MAXN+5][MAXN+5], f[MAXN+5][MAXN+5];
int n, s = 1, t;

bool bfs(vector<int>& parent) {
    vector<bool> visited(n+1, false);
    queue<int> q;
    q.push(s);
    visited[s] = true;
    parent[s] = -1;

    while(!q.empty()) {
        int u = q.front();
        q.pop();
        for(int v = 1; v <= n; v++) {
            if(!visited[v] && f[u][v] < c[u][v]) {
                q.push(v);
                parent[v] = u;
                visited[v] = true;
            }
        }
    }

    return visited[t];
}

int fordFulkerson() {
    vector<int> parent(n+1, 0);
    int maxFlow = 0;

    while(bfs(parent)) {
        int pathFlow = INT_MAX;
        for(int v = t; v != s; v = parent[v]) {
            int u = parent[v];
            pathFlow = min(pathFlow, c[u][v] - f[u][v]);
        }

        for(int v = t; v != s; v = parent[v]) {
            int u = parent[v];
      		f[u][v] += pathFlow;
      		f[v][u] -= pathFlow;
        }
        maxFlow += pathFlow;
    }

    return maxFlow;
}

int main() {
    ifstream fl("DT.INP.txt");
    ofstream gl("DT.OUT.txt");
    fl >> n;
    t = n;

    for(int u = 1; u <= n; u++) {
        for(int v = 1; v <= n; v++) {
            fl >> c[u][v];
            f[u][v] = 0;
        }
    }

    int maxFlow = fordFulkerson();

    gl << maxFlow << endl;
    for(int u = 1; u <= n; u++) {
        for(int v = 1; v <= n; v++) {
            gl << f[u][v] << " ";
        }
        gl << endl;
    }

    return 0;
}
