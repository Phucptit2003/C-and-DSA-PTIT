#include<bits/stdc++.h>

using namespace std;

int a[1005];

int main()
{
    int t = 1, n, k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        for(int i= 1;i<= k;i++) cin >> a[i];
        int tmp = k;
        while(a[tmp - 1] + 1 == a[tmp] && tmp) --tmp;
        if(tmp)
        {
            --a[tmp];
            for(int i=tmp+1;i<=k;i++) a[i] = n - k + i;
            for(int i=1;i<=k;i++) cout << a[i] << ' ';
        }
        else for(int i=n-k+1;i<=n;i++) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

