#include<iostream>
using namespace std;
int ktra(int x,int y){
	int dem=x;
	for(int i=1;i<y;i++){
		x=x*dem;
	} return x;
}
int main(){
	int x,y,p;
	cin>>x>>y>>p;
	cout<<ktra(x,y)%p;
}
