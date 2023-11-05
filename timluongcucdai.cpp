

const int MAXN = 100;

int FordFulkerson(int c[][MAXN], int s, int t)
{
    int n = MAXN;      // số đỉnh của đồ thị
    int f[n][n] = {0}; // khởi tạo luồng f bằng 0
    while (true)
    {
        int trace[n];                     // mảng trace để lưu đường đi tăng luồng từ s đến t
        memset(trace, -1, sizeof(trace)); // khởi tạo trace bằng -1
        trace[s] = s;                     // đỉnh bắt đầu của đường đi là s
        queue<int> q;
        q.push(s); // đưa đỉnh s vào hàng đợi q
        while (!q.empty() && trace[t] == -1)
        {
            int u = q.front();
            q.pop();
            for (int v = 0; v < n; v++)
            {
                if (trace[v] == -1 && c[u][v] > f[u][v])
                {
                    trace[v] = u;
                    q.push(v);
                }
            }
        }
        if (trace[t] == -1)
        { // không tìm được đường đi tăng luồng từ s đến t
            break;
        }
        int delta = INT_MAX; // giá trị delta là giá trị tối thiểu của các cạnh trên đường đi tăng luồng
        for (int v = t; v != s; v = trace[v])
        {
            int u = trace[v];
            delta = min(delta, c[u][v] - f[u][v]);
        }
        for (int v = t; v != s; v = trace[v])
        { // cập nhật luồng f trên đường đi tăng luồng
            int u = trace[v];
            f[u][v] += delta;
            f[v][u] -= delta;
        }
    }
    int val_f = 0; // giá trị luồng cực đại
    for (int v = 0; v < n; v++)
    {
        val_f += f[s][v];
    }
    return val_f;
}
int main()
    {
        int c[MAXN][MAXN]; // ma trận trọng số của đồ thị G
        int n, s = 1, t;   // n là số đỉnh của đồ thị, s là đỉnh phát, t là đỉnh thu
        ifstream infile;
        infile.open("DT.INP");
        infile >> n;
        t = n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                infile >> c[i][j];
            }
        }
        infile.close();
        int val_f = FordFulkerson(c, s, t); // tìm luồng cực đại bằng thuật toán đường tăng luồng dựa trên Ford-Fulkerson
        // xuất kết quả ra tệp DT.OUT
        ofstream outfile;
        outfile.open("DT.OUT");
        outfile << val_f << endl;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                outfile << f[i][j] << " ";
            }
            outfile << endl;
        }
        outfile.close();
        return 0;
}
