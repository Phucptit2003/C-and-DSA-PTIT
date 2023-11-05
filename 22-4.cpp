#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1005;
int c[MAXN][MAXN], f[MAXN][MAXN], trace[MAXN];
int n, s = 1, t;

void input() {
    ifstream infile("DT.INP.txt");
    infile >> n;
    t = n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            infile >> c[i][j];
        }
    }
    infile.close();
}

int augment() {
    queue<int> q;
    memset(trace, 0, sizeof(trace));
    trace[s] = -1;
    q.push(s);
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        for(int v = 1; v <= n; v++) {
            if(!trace[v] && c[u][v] - f[u][v] > 0) {
                trace[v] = u;
                q.push(v);
                if(v == t) return 1;
            }
        }
    }
    return 0;
}

void maxflow() {
    memset(f, 0, sizeof(f));
    int df;
    while(augment()) {
        df = INT_MAX;
        for(int v = t; v != s; v = trace[v]) {
            int u = trace[v];
            df = min(df, c[u][v] - f[u][v]);
        }
        for(int v = t; v != s; v = trace[v]) {
            int u = trace[v];
            f[u][v] += df;
            f[v][u] -= df;
        }
    }
}

void output() {
    ofstream outfile("DT.OUT.txt");
    int max_flow = 0;
    for(int i = 1; i <= n; i++) {
        max_flow += f[s][i];
    }
    outfile << max_flow << endl;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            outfile << f[i][j] << " ";
        }
        outfile << endl;
    }
    outfile.close();
}

int main() {
    input();
    maxflow();
    output();
    return 0;
}

