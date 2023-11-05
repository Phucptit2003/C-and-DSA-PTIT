#include <bits/stdc++.h>
using namespace std;

const int N=1005, M=1005;
const int dx[]={-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[]={-1, 0, 1, -1, 1, -1, 0, 1};
unordered_set<string> dic;
bool vis[N][M];
int n, m;
char A[N][M];

bool isValid(int x, int y){
    return x>=0 && x<n && y>=0 && y<m;
}

void dfs(int x, int y, string word){
    if (!isValid(x, y) || vis[x][y]) return;
    word+=A[x][y];
    if (dic.count(word)) cout<<word<<endl;
    vis[x][y]=true;
    for (int i=0; i<8; i++){
        int xx=x+dx[i], yy=y+dy[i];
        dfs(xx, yy, word);
    }
    vis[x][y]=false;
}

int main(){
    cin>>n>>m;
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            cin>>A[i][j];
    int dicSize;
    cin>>dicSize;
    while (dicSize--){
        string word;
        cin>>word;
        dic.insert(word);
    }
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            dfs(i, j, "");
    return 0;
}

