#include<bits/stdc++.h>
using namespace std;
int n;
int b;
int a[10005];
int c[10005];
int x[10005];
int pa[10005];
int fopt;
int xopt;
long Kiemtra(int x[],int n){
	long long s=0,tmp=0;
	for(int i=1;i<=n;i++){
		s=s+a[i]*x[i];
	}
	if(s<=b){
		for(int i=1;i<=n;i++){
			tmp=tmp+c[i]*x[i];
		}
	} else tmp=-1;
	return tmp;
}
void XnDq(int k, long w, long d){
	if(k>n){
		long tmp=Kiemtra(x,n);
	    if(fopt<tmp){
	    	fopt=tmp;
	    	for(int i=1;i<=n;i++){
	    		pa[i]=x[i];
	    	}
	    	return;
		}}
		for(int i=1;i>=0;i--){
			x[k]=i;
			w=w-x[k]*a[k];
			d=d+x[k]*c[k];
			long g=d+w*(c[k+1]/a[k+1]);
			if(w>=0 && g>fopt) XnDq(k+1,w,d);
			w=w+x[k]*a[k];
			d=d-x[k]*c[k];
		}
}
void NhanhCan(){
	int i,j;
	long tmp;
	for(i=n;i>1;i--){
		for(j=1;j<i;j++){
			if(c[j]/a[j]<c[j+1]/a[j+1]){
				swap(c[j],c[j+1]);
				swap(a[j],a[j+1]);
			}
		}
	}
	long w=b;
	long d=0;
	fopt=-1;
	XnDq(1,w,d);
}
int main(){	
	cin>>n;	
	cin>>b;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>c[i];
	}
    NhanhCan();
    cout<<fopt;
}

