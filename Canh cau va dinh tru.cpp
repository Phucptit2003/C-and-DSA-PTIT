#include <bits/stdc++.h>

using namespace std;

const int MAXN = 10000;
const int MAXM = 100000;

vector<int> graph[MAXN + 1];
bool visited[MAXN + 1];
int tin[MAXN + 1], low[MAXN + 1];
int timer = 0;
int dinhtru = 0;
int canhcau = 0;

void finds(int u, int parent) {
    visited[u] = true;
    tin[u] = low[u] = timer++;
    int childCount = 0;
    bool check = false;

    for (int v : graph[u]) {
        if (v == parent) 
            continue;

        if (visited[v]) {
            low[u] = min(low[u], tin[v]);
        } else {
            finds(v, u);

            low[u] = min(low[u], low[v]);

            if (low[v] >= tin[u]) {
                check = true;
            }

            if (low[v] > tin[u]) {
                canhcau++;
            }

            childCount++;
        }
    }

    if ((parent == -1 && childCount > 1) || (parent != -1 && check)) {
        dinhtru++;
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    memset(visited, false, sizeof(visited));
    memset(tin, -1, sizeof(tin));
    memset(low, -1, sizeof(low));

    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            finds(i, -1);
        }
    }

    cout << dinhtru << " " << canhcau << endl;

    return 0;
}
