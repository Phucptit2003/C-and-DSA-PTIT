#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string name,gt,ngaysinh,noio,thue,ngayki;
};
void nhap(NhanVien &nv){
	cin.ignore();
	getline(cin,nv.name);
	cin>>nv.gt;
	cin>>nv.ngaysinh;
	cin.ignore();
	getline(cin,nv.noio);
	cin>>nv.thue;
	cin>>nv.ngayki;
}
void inds(NhanVien nv[],int N){
	for(int i=0;i<N;i++){
		string res = to_string(i+1); 
		while(res.size()<5){ 
		   res = "0"+res;
	     } cout<<res<<" "; 
		 cout<<nv[i].name<<" "<<nv[i].gt<<" "<<nv[i].ngaysinh<<" "<<nv[i].noio<<" "<<nv[i].thue<<" "<<nv[i].ngayki<<endl;
	}
}
int main(){
	struct NhanVien ds[50];
	int N,i;
	cin>>N;
	for(int i=0;i<N;i++) nhap(ds[i]);
	inds(ds,N);
	return 0;
}
