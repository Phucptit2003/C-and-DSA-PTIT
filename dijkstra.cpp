#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int v, e, u, x, y, z;
    while(t--)
    {
        cin >> v >> e >> u;
        vector<pair<int, int>> a[v + 5];
        while(e--)
        {
            cin >> x >> y >> z;
            a[x].push_back({y, z});
            a[y].push_back({x, z});
        }
        int dist[v + 5];
        for(int i = 1; i <= v; ++i)
            dist[i] = INT_MAX;
        dist[u] = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, u});
        pair<int, int> top;
        while(pq.size())
        {
            top = pq.top();
            pq.pop();
            if(top.first <= dist[top.second])
            {
                for(pair<int, int> &i : a[top.second])
                {
                    if(dist[i.first] > dist[top.second] + i.second)
                    {
                        dist[i.first] = dist[top.second] + i.second;
                        pq.push({dist[i.first], i.first});
                    }
                }
            }
        }
        for(int i = 1; i <= v; ++i)
            cout << dist[i] << ' ';
        cout << endl;
    }
    return 0;
}
