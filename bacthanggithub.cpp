#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, n, x, sum, k, mod = 1e9 + 7, dp[100005];
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        ++n;
        ++k;
        sum = 1;
        for(int i = 1; i < k; ++i)
        {
            dp[i] = sum;
            sum = (sum + dp[i]) % mod;
        }
        x = 1;
        sum -= 1;
        for(int i = k; i < n; ++i)
        {
            dp[i] = sum;
            sum -= dp[x++];
            sum += dp[i];
            sum %= mod;
            if(sum < 0) sum += mod;
        }
        cout << dp[n - 1] << endl;
    }
    return 0;
}

