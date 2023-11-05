#include<iostream>
using namespace std;
struct SV{
	string ma;
	string name;
	string lop;
	float diemtin;
	float diemc;
};
void nhap(SV &sv){
	
	cin>>sv.ma;
	getline(cin,sv.name);
	cin>>sv.lop;
	cin>>sv.diemtin>>sv.diemc;
}
void in(SV sv[],int n){
	for(int i=0;i<=n;i++){
	if(sv[i].diemc>=7.0) cout<<sv[i].diemc<<" ";
} cout<<endl;
 //for(int i=1;i<n;i++){
 //	if(sv[i].name)
 //}
}
int main(){
	struct SV ds[50];
	int n;
	cin>>n;
	for(int i=0;i<n;i++) nhap(ds[i]);
	
}
