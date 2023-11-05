#include <iostream>
#include <cstring>
using namespace std;
int n;
int longestRepeatedSubstring(string s) {
    int dp[n+1][n+1];
    memset(dp, 0, sizeof(dp)); 
    int maxLength = 0; 

    for (int i = 1; i <= n; i++) {
        for (int j = i+1; j <= n; j++) {
            if (s[i-1] == s[j-1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
                maxLength = max(maxLength, dp[i][j]);
            }
        }
    }

    return maxLength;
}

int main() {
	int test;
	cin>>test;
	while(test--){
		cin>>n;
	    string s;
	    cin>>s;
	    cout << longestRepeatedSubstring(s) << endl; 
	}
    return 0;
}

