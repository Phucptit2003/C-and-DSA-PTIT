#include<bits/stdc++.h>

using namespace std;
long long a[55];

int Find(int id, long long n, long long i)
{
    if(id == 1) return n%2;
    long long tmp = a[id - 1];
    if(i == tmp + 1) return n%2;
    if(i < tmp + 1) return Find(id - 1, n/2, i);
    return Find(id - 1, n/2, i - tmp - 1);
}

int main()
{
    int test;
    long long n, l, r, tmp;
    cin >> test;
    while(test--)
    {
        cin >> n >> l >> r;
        memset(a, 0, sizeof(a));
        a[1] = 1;
        tmp = n;
        n =n/2;
        int id = 2;
        while(n > 0)
        {
            a[id] = (a[id - 1] *2) + 1;
            n =n/2;
            id++;
        }
        id--;
        long long res = 0;
        for(long long i = l; i <= r; ++i) res += Find(id, tmp, i);
        cout << res << endl;
    }
    return 0;
}

