#include<bits/stdc++.h>
using namespace std;

bool Try(long long arr[], int n, int k) {
    sort(arr, arr + n);
    for (int i = 0; i < n - 2; i++) {
        int l = i + 1, r = n - 1;
        while (l < r) {
            int sum = arr[i] + arr[l] + arr[r];
            if (sum == k) {
                return true;
            }
            else if (sum < k) {
                l++;
            }
            else {
                r--;
            }
        }
    }
    return false;
}

int main() {
    int test;
    cin>>test;
    while(test--){
    	int n,k;
    	cin>>n>>k;
    	long long a[n];
    	for(int i=0;i<n;i++) cin>>a[i];
    	if(Try(a,n,k)) cout<<"YES\n";
    	else cout<<"NO\n";
    	
	}
}

