#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		stack<string>st;
		int t=1;
		bool check;
		for(int i=0;i<n-1;i++){
			check=false;		
			for(int j=0;j<n-1-i;j++){
				if(a[j]>a[j+1]){
					swap(a[j],a[j+1]);
					check=true;
				}
			}
			if(check==false){
				break;
			}
			string s="Buoc "+to_string(t)+": ";		
			for(int k=0;k<n;k++){
				s+=to_string(a[k])+" ";
			}
			st.push(s);
			t++;
		}
		while(!st.empty()){
			cout<<st.top()<<endl;
			st.pop();
		}
	}
}

