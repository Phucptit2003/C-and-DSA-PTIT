#include<bits/stdc++.h>

using namespace std;

bool ok(string &s)
{
    int f[10] = {};
    for(char &i : s)
    {
        ++f[i - '0'];
        if(f[i - '0'] > 1) return 0;
    }
    return 1;
}

int main()
{
    int test, l, r, x, y;
    vector<int> v;
    queue<string> q;
    q.push("");
    string top, cur;
    int tmp;
    bool check = 1;
    while(check)
    {
        top = q.front();
        q.pop();
        if(top == "0") continue;
        for(int i = 0; i <= 5; ++i)
        {
            cur = top + to_string(i);
            if(!ok(cur)) continue;
            q.push(cur);
            tmp = stoi(cur);
            if(tmp > 1e5)
            {
                check = 0;
                break;
            }
            v.push_back(tmp);
        }
    }
    cin >> test;
    while(test--)
    {
        cin >> l >> r;
        x = lower_bound(v.begin(),v.end(), l) - v.begin();
        y = lower_bound(v.begin(),v.end(), r) - v.begin();
        if(y >= v.size() || v[y] > r) --y;
        cout << y - x + 1 << endl;
    }
    return 0;
}

