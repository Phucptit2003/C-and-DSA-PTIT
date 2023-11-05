#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int i;
    int demmu=0;
    vector<int>v;
    vector<int>dem;
    for(i=2;i<=n;i++){
    	if(n%i==0){
    		v.push_back(i);
    		while(n%i==0){
    			demmu++;
    			n/=i;
			}
			dem.push_back(demmu);
			demmu=0;
		}
	}
	int l=v.size();
	if(n>1) cout<<l+1<<endl;
	else cout<<l<<endl;
	for(int i=0;i<l;i++){
		cout<<v[i]<<" "<<dem[i]<<endl;
	}
	if(n>1) cout<<n<<" "<<"1"<<endl;
}

