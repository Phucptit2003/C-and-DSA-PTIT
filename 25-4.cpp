const int MAXN = 1005;
int n, a[MAXN][MAXN], deg[MAXN];
vector<int> EULER(int a[][MAXN])
{
    vector<int> path;

    // Tính bậc của từng đỉnh
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            deg[i] += a[i][j];
        }
    }

    // Tìm đỉnh xuất phát u
    int u = 1;
    for (int i = 1; i <= n; i++)
    {
        if (deg[i] % 2 == 1)
        {
            u = i;
            break;
        }
    }

    DFS(u, path);

    // Đảo ngược danh sách đỉnh thu được
    reverse(path.begin(), path.end());

    return path;
}
