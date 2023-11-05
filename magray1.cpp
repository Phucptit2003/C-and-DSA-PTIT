#include <bits/stdc++.h>
using namespace std;

vector<string> grayCode(int n) {
    if (n == 1) {
        return {"0", "1"};
    }
    vector<string> grayCodePrev = grayCode(n - 1);
    vector<string> grayCodeCurr;
    for (int i = 0; i < grayCodePrev.size(); i++) {
        grayCodeCurr.push_back("0" + grayCodePrev[i]);
    }
    for (int i = grayCodePrev.size() - 1; i >= 0; i--) {
        grayCodeCurr.push_back("1" + grayCodePrev[i]);
    }
    return grayCodeCurr;
}

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        vector<string> grayCodeN = grayCode(n);
        for (string gray : grayCodeN) {
            cout << gray << " ";
        }
        cout << endl;
    }
    return 0;
}

