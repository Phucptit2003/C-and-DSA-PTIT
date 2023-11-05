#include <bits/stdc++.h>
#include <vector>

using namespace std;
vector<string>v;
void subseq(vector<int> &a, int i, vector<int> &current) {
    if (i == a.size()) {
        if (current.size() >= 2) {
        	string s="";
            for (int j = 0; j < current.size(); j++) {
                s+=to_string(current[j])+" ";
            }
 //           cout << endl;
 			v.push_back(s);
        }
        return;
    }
    subseq(a, i + 1, current);
    if (current.empty() || a[i] > current.back()) {
        current.push_back(a[i]);
        subseq(a, i + 1, current);
        current.pop_back();
    }
}

int main() {
	int n;
	cin>>n;
    vector<int> a ;
    for(int i=0;i<n;i++){
    	int x;
    	cin>>x;
    	a.push_back(x);
	}
    vector<int> current;
    subseq(a, 0, current);
    sort(v.begin(),v.end());
    for(auto x:v){
    	cout<<x<<endl;
	}
    return 0;
}

