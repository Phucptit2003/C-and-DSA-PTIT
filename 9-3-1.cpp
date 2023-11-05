#include<bits/stdc++.h>

using namespace std;

bool vs[15] = {};
int n, a[15] = {};
 
void Try(int i)
{
    for (int j = 1; j <= n; ++j)
    {
        if (!vs[j])
        {
            a[i] = j;
            vs[j] = 1;
            if(i == n) {
			    for (int i = 1; i <= n; ++i) cout << a[i];
			    cout << ' ';
			}
            else Try(i + 1);
            vs[j] = 0;
        }
    }
}

int main()
{
    int t = 1;
    cin >> t;
    while(t--)
    {
        cin >> n;
        Try(1);
        cout << endl;
    }
    return 0;
}

