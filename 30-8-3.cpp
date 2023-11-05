#include <bits/stdc++.h>
#include <string>
using namespace std;
bool Smaller(string a, string b)
{
    int l1 = a.length();
    int l2 = b.length();
    if (l1 < l2) return true;
    if (l1 > l2) return false;
    for (int i = 0; i < l1; i++)
    {
        if (a[i] < b[i])
        {
            return true;
        }
        else if (a[i] > b[i])
        {
            return false;
        }
    }
    return false;
}
string sub(string a, string b)
{
    if (Smaller(a, b)) swap(a, b);
    string str = "";
    int l1 = a.length(), l2 = b.length();
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int carry = 0;
    for (int i = 0; i < l2; i++)
    {
        int diff = ((a[i] - '0') - (b[i] - '0') - carry);
        if (diff < 0)
        {
            diff = diff + 10;
            carry = 1;
        }
        else carry = 0;
        str.push_back(diff + '0');
    }
    for (int i = l2; i < l1; i++)
    {
        int diff = ((a[i] - '0') - carry);
        if (diff < 0)
        {
            diff += 10;
            carry = 1;
        }
        else carry = 0;

        str.push_back(diff + '0');
    }
    reverse(str.begin(), str.end());
    return str;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        cout << sub(s1, s2) << endl;
    }
}

