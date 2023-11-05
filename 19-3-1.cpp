#include <bits/stdc++.h>
using namespace std;
set<char>se;
int minSubstring(string s) {
    int n = s.length();
    int count[256] = {0}; 
    int count_unique = 0; 
    int left = 0, right = 0; 
    int min_length = INT_MAX; 
    while (right < n) {
        if (count[s[right]] == 0) {
            count_unique++;
        }
        count[s[right]]++;

        while (count[s[left]] > 1) {
            count[s[left]]--;
            left++;
		}
        if (count_unique == se.size()) {
            min_length = min(min_length, right - left + 1);
            count[s[left]]--;
            if (count[s[left]] == 0) {
                count_unique--;
            }
            left++;
        }

        right++;
    }

    return min_length;
}

int main() {
	int test;
	cin>>test;
	while(test--){
	    string s ;
	    cin>>s;
	    for(auto x:s){
	    	se.insert(x);
		}
	    cout << minSubstring(s) << endl;
	    se.clear();
	}
    return 0;
}
