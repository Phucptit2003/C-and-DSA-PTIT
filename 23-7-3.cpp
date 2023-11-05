#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, X, Y, Z;
vector<pair<int, int>> salaryRange;

bool isValidSalary(int salary) {
    int codeLines;
    for (int i = 0; i < N; ++i) {
        if (salary < salaryRange[i].first) {
            codeLines = X;
        } else if (salary > salaryRange[i].second) {
            codeLines = Z;
        } else {
            codeLines = Y;
        }
        if (codeLines < X || codeLines < Z) {
            return false;
        }
    }
    return true;
}

int main() {
    cin >> N >> X >> Y >> Z;
    salaryRange.resize(N);

    for (int i = 0; i < N; ++i) {
        cin >> salaryRange[i].first >> salaryRange[i].second;
    }

    sort(salaryRange.begin(), salaryRange.end());

    int low = 0, high = 1e9, ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (isValidSalary(mid)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << ans * static_cast<long long>(Y) + (N - 1) * static_cast<long long>(Z) << endl;

    return 0;
}

