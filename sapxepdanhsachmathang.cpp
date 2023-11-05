#include<bits/stdc++.h>
using namespace std;
struct MatHang{
	int ma;
	string name;
	string nhom;
	double giamua,giaban;
	double loinhuan;
};
void nhap(MatHang a[],int n){
	int dem=0;
	for(int i=1;i<=n;i++){
		dem++;
		a[i].ma=dem;
		cin.ignore();
		getline(cin,a[i].name);
//		cin.ignore();
		getline(cin,a[i].nhom);
		cin>>a[i].giamua>>a[i].giaban;
	}
}
void sapxep(MatHang a[],int n){
	for(int i=1;i<=n;i++){
	a[i].loinhuan=a[i].giaban-a[i].giamua;}
	for(int i=1;i<=n-1;i++){
		for(int j=i+1;j<=n;j++){	
			if(a[i].loinhuan<a[j].loinhuan){
				swap(a[i],a[j]);
			}
		}
	} 
}
void in(MatHang a[],int n){
	for(int i=1;i<=n;i++){
//		a[i].loinhuan=a[i].giaban-a[i].giamua;
		cout<<a[i].ma<<" "<<a[i].name<<" "<<a[i].nhom<<" "<<fixed<<setprecision(2)<<a[i].loinhuan<<endl;
	}
}
int main(){
    struct MatHang ds[50];
    int n;
    cin>>n;
    nhap(ds,n);
    sapxep(ds,n);
    in(ds,n);
}

