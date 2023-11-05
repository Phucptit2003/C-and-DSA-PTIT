#include <bits/stdc++.h>
using namespace std;
int cnt[1000005] = {0};
int main() {
	int test;
	cin>>test;
	while(test--){
	    int n, k;
	    cin >> n >> k;
	    int a[n];
		memset(cnt,0,sizeof(cnt));	    
	    for (int i = 0; i < n; i++) {
	        cin >> a[i];
	        cnt[a[i]]++;
	    }
	    int count = 0;
	    for (int i = 0; i < n; i++) {
	        if (k - a[i] >= 0 && cnt[k - a[i]] > 0) {
	            if (k - a[i] == a[i]) {
	                count += cnt[k - a[i]] - 1;
	            } else {
	                count += cnt[k - a[i]];
	            }
	        }
	    }
	    cout << count / 2 << endl;
	}
    return 0;
}

