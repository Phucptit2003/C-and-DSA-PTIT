#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;   
    while(test--)
    {	string s;
		long long n, x, tmp;
        cin >> s >> n;
        x = s.size();
        while (x < n) x <<= 1;
        cout<<x<<endl;
        while(x > s.size())
        {
            tmp = x /2;
            if(n > tmp)
            {
                n -= tmp;
                --n;
                if(n==0) n = tmp;
            }
            x =x/2;
        }
        cout << s[n - 1] << endl;
    }
    return 0;
}

