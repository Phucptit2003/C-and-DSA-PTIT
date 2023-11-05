#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(vector<vector<int>>& graph, int start, int N) {
    vector<bool> visited(N + 1, false);  // M?ng luu tr?ng thái dã duy?t c?a các d?nh
    vector<int> path(N + 1, -1);  // M?ng luu du?ng di t? d?nh start d?n các d?nh khác
    queue<int> q;
    
    visited[start] = true;
    q.push(start);
    
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        
        for (int v : graph[u]) {
            if (!visited[v]) {
                visited[v] = true;
                path[v] = u;
                q.push(v);
            }
        }
    }
    
    // In du?ng di t? d?nh s d?n t?ng d?nh t? 1 d?n N (tr? chính d?nh s)
    for (int i = 1; i <= N; i++) {
        if (i != start) {
            if (path[i] == -1) {
                cout << "No path" << endl;
            } else {
                vector<int> temp;
                int curr = i;
                while (curr != start) {
                    temp.push_back(curr);
                    curr = path[curr];
                }
                temp.push_back(start);
                cout << "Path from " << start << " to " << i << ": ";
                for (int j = temp.size() - 1; j >= 0; j--) {
                    cout << temp[j];
                    if (j != 0) {
                        cout << " -> ";
                    }
                }
                cout << endl;
            }
        }
    }
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, M, s;
        cin >> N >> M >> s;
        
        vector<vector<int>> graph(N + 1);  // Danh sách c?nh
        
        for (int i = 0; i < M; i++) {
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);  // Ð? th? vô hu?ng nên c?n thêm c? 2 chi?u
        }
        
        bfs(graph, s, N);
    }
    
    return 0;
}

