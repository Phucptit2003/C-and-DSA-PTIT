#include<bits/stdc++.h>

using namespace std;
const long long P=9000000999999;
int main()
{
    vector<long long> v;
    long long tmp = 9;
    v.push_back(tmp);
    while(tmp * 10 <= P)
    {
        int s = v.size();
        tmp *= 10;
        v.push_back(tmp);
        for(int i=0;i<s;i++) v.push_back(tmp + v[i]);
    }
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int idx = 0;
        while(v[idx] % n) ++idx;
        cout << v[idx] << endl;
    }
    return 0;
}
