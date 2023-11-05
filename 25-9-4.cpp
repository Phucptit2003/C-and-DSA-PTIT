#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<string>v;
	while(n--){
       string s;
       cin>>s;
       v.push_back(s);
    }
    int dem=1;
    int res=0;
    int check=0;
	int pos=1;
    for(int i=0;i<v.size()-1;i++){	
	while(pos<v[i].size()){ 
	    string t=""; 	
    	for(int j=pos;j<v[i].size();j++){
    		t+=v[i][j];
		}
		for(int k=0;k<pos;k++){
			t+=v[i][k];
		}
		if(t==v[i+1]){	
			check=1;
			res+=dem;
			cout<<res<<endl;
			break;
		} else {
		pos++;
		dem++;
		}
	}}
	if(check==0) cout<<"-1"<<endl;
}

