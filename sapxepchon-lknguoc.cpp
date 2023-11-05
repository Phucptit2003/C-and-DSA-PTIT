#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b,b+n);
	stack<string>st;
	int stt=1;
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		swap(a[i],a[min]);		
		string s="Buoc "+to_string(stt)+": ";
		stt++;
		for(int k=0;k<n;k++){
			s+=to_string(a[k])+" ";
		}
		st.push(s);
	}
	while(!st.empty()){
		cout<<st.top()<<endl;
		st.pop();
	}
}

