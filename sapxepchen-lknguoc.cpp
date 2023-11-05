#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	stack<string>st;
	int min,j,t=0;
	for(int i=1;i<=n;i++){
		min=a[i];
		j=i-1;
		string s="Buoc "+to_string(t)+": ";		
		for(int k=0;k<i;k++){
			s+=to_string(a[k])+" ";
		}
		st.push(s);
		while(j>=0 && a[j]>min){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=min;
		t++;
	}
	while(!st.empty()){
		cout<<st.top()<<endl;
		st.pop();
	}
}

