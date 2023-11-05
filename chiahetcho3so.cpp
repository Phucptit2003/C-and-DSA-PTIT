#include<iostream>
#include<math.h>
using namespace std;
void sapxep(int a,int b){
	if(a<b){
		int temp=a;
		a=b;
		b=temp;
	}
}
int check(int n,int m,int p){
	sapxep(m,n);
	sapxep(n,p);
	sapxep(m,n);
	if(m%n==0&&m%p==0){
		return m;
	}else  if(m%n==0&&m%p!=0){
		return m*p;
	} else if(m%n!=0&&m%p==0){
		return m*n;
	} else if(m%n!=0&&m%p!=0){
		return m*n*p;
	} else if(m%n!=0&&n%p==0){
		return m*n;
	}
}
int main(){
	int x,y,z,n;
	cin>>x>>y>>z>>n;
	for(int i=pow(10,n-1);i<pow(10,n);i++){
		if(i%check(x,y,z)==0){
			cout<<i<<"\n";
			break;
		} else{
			cout<<"-1";
			break;
		}
	}
}
