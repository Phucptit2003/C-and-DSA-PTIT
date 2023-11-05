struct Edge
{
    int u, v, w;
};
bool compare(Edge a, Edge b) { return a.w < b.w; }

void KRUSKAL(int a[][])
{
    int n = sizeof(a) / sizeof(a[0]); // số đỉnh của đồ thị
    vector<Edge> edges;               // danh sách các cạnh của đồ thị
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i][j] != 0)
            {
                Edge e;
                e.u = i;
                e.v = j;
                e.w = a[i][j];
                edges.push_back(e);
            }
        }
    }
    sort(edges.begin(), edges.end(), compare); // sắp xếp các cạnh theo trọng số tăng dần
    vector<Edge> tree;                         // danh sách các cạnh trong cây khung nhỏ nhất
    int parent[n];                             // mảng cha để xác định các cây con trong đồ thị
    for (int i = 0; i < n; i++)
    {
        parent[i] = i; // ban đầu, mỗi đỉnh là một cây con
    }
    for (int i = 0; i < edges.size(); i++)
    {
        Edge e = edges[i];
        int u = e.u, v = e.v, w = e.w;
        int parent_u = parent[u], parent_v = parent[v];
        if (parent_u != parent_v)
        {                      // nếu u và v không thuộc cùng một cây con
            tree.push_back(e); // thêm cạnh (u, v) vào cây khung nhỏ nhất
            for (int j = 0; j < n; j++)
            {
                if (parent[j] == parent_v)
                {
                    parent[j] = parent_u; // gộp cây con chứa v vào cây con chứa u
                }
            }
        }
    }