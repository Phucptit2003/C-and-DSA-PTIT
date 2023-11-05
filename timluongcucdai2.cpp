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

int bfs() {
    queue<int> q;
    memset(trace, 0, sizeof(trace));
    bool vs[MAXN]={false};
    trace[s] = -1;
    q.push(s);
    vs[s]=true;
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        for(int v = 1; v <= n; v++) {
            if(!vs[v] && c[u][v] - f[u][v] > 0) {
                trace[v] = u;
                q.push(v);
                vs[v]=1;
                if(v == t) return 1;
            }
        }
    }
    return 0;
}

int maxflow() {
    memset(f, 0, sizeof(f));
    int df;
    int max_flow=0;
    while(bfs()) {
        df = INT_MAX;
        for(int v = t; v != s; v = trace[v]) {
            int u = trace[v];
            df = min(df, c[u][v] - f[u][v]);
        }
        for(int v = t; v != s; v = trace[v]) {
            int u = trace[v];
            f[u][v] += df;
	 f[v][u] -= df ;
        }
        max_flow+=df;
    }
    return max_flow;
}

void output() {
    ofstream outfile("DT.OUT.txt");
    outfile << maxflow() << endl;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
	  if(f[i][j]<0) f[i][j] = 0 ;
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

