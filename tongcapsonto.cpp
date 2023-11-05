#include <bits/stdc++.h>

using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
	int test;
	cin>>test;
	while(test--){
	    int N;
	    cin >> N;
	    bool found = false;
	    for (int i = 2; i <= N / 2; i++) {
	        if (is_prime(i) && is_prime(N - i)) {
	            cout << i << " " << N - i << endl;
	            found = true;
	            break;
	        }
	    }
	
	    if (!found) cout << -1 << endl;
	}
    return 0;
}

