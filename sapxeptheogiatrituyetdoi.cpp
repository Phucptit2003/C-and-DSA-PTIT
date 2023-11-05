#include <bits/stdc++.h>

using namespace std;
int n,X;
bool compare(int a, int b) {
    return abs(X - a) < abs(X - b);
}

int main() {
    int test;
    cin>>test;
    while(test--){
	    cin >> n >> X;
	
	    int A[n];
	    for (int i = 0; i < n; i++) {
	        cin >> A[i];
	    }
	
	    stable_sort(A, A + n, compare);
	
	    for (int i = 0; i < n; i++) {
	        cout << A[i] << " ";
	    }
	    cout << endl;
	}
    return 0;
}

