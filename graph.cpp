#include <bits/stdc++.h>

using namespace std;

class Graph {
private:
    int v;
    vector<vector<int>> adjList;

public:
    Graph(int v) {
        this->v = v;
        adjList.resize(v);
    }

    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    void printAdjList() {
        for (int i = 1; i < v; i++) {
            cout << "Danh sach ke la dinh " << i << ": ";
            for (int j = 0; j < adjList[i].size(); j++) {
                cout <<"-> "<< adjList[i][j];
            }
            cout << endl;
        }
    }
};

int main() {
	ifstream f;
	f.open("DT.INP.txt");
	int n,m,dau,cuoi;
    f>>n>>m; 
    Graph graph(n+1);
    for(int i=0;i<n;i++){
    	f>>dau>>cuoi;
    	graph.addEdge(dau,cuoi);
	}
    graph.printAdjList();
    return 0;
}

