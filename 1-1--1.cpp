#include<bits/stdc++.h>

using namespace std;

long long Xep(vector<int>a,int l,int mid,int r){
	vector<int> x(a.begin()+l,a.begin()+mid+1);
	vector<int> y(a.begin()+mid+1,a.begin()+r+1);
	int i=0,j=0;
    long long cnt=0;
	while(i<x.size() && j<y.size()){
		if(x[i] <= y[j]){
			a[l++]=x[i++];
		}else{
			cnt+=x.size()-i;
			a[l++]=y[j++];
		}
	}
	while(i<x.size()){
		a[l++]=x[i++];
	}
	while(j<y.size()){
		a[l++]=y[j++];
	}
	return cnt;
}
long long Sapxep(vector<int>a,int l,int r){
	long long dem=0;
	if(l<r){
		int mid=(l+r)/2;
		dem+=Sapxep(a,l,mid);
		dem+=Sapxep(a,mid+1,r);
		dem+=Xep(a,l,mid,r);
	}
	return dem;
}
int solve(std::vector<int> arr)
{   
    int n=arr.size();
    return Sapxep(arr,0,n);
}
int main(){
	vector<int>a={3,1,2};
	cout<<solve(a);
}

