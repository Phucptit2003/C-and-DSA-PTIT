#include<bits/stdc++.h>

using namespace std;

bool notPrime[205] = {};
int N = 200, n, s, p, k;
vector<int> a, tmp;
vector<vector<int>> res;

void Sang()
{
    for(int i = 2; i <= sqrt(N); ++i)
        if(!notPrime[i])
            for(int j = i * i; j <= N; j += i)
                notPrime[j] = 1;
    for(int i = 2; i <= N; ++i) if(!notPrime[i]) a.push_back(i);
}

void Try(int i, int sum = 0)
{
    if(sum > s) return;
    if(sum == s)
    {
        if(tmp.size() == n) res.push_back(tmp);
        return;
    }
    for(int j = i; j < a.size(); ++j)
    {
        tmp.push_back(a[j]);
        Try(j + 1, sum + a[j]);
        tmp.pop_back();
    }
}

int main()
{
    Sang();
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> p >> s;
        k = upper_bound(a.begin(),a.end(), p) - a.begin();
        Try(k);
        cout << res.size() << endl;
        for(auto &i : res)
        {
            for(auto &j : i) cout << j << " ";
            cout << endl;
        }
        tmp.clear();
        res.clear();
    }
    return 0;
}

