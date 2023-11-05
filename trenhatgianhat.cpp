#include<bits/stdc++.h>
using namespace std;
struct Date{
	string name;
	int ngay,thang,nam;
};
void nhap(Date &a){
	cin>>a.name;
}
bool xuly(Date a,Date b){
	if(a.nam==b.nam){
		if(a.thang==b.thang) return a.ngay<b.ngay;
		else return a.thang<b.thang;
	} else return a.nam<b.nam;
}
//void sapxep(Date a[],int n){
//	sort(a,a+n,xuly);
//}
int main(){
  int n;
  cin>>n;
  Date ds[n];
  for(int i=0;i<n;i++){
  	nhap(ds[i]);
  	string x;
  	cin>>x;
  	ds[i].ngay=(x[0]-'0')*10+(x[1]-'0');
  	ds[i].thang=(x[3]-'0')*10+(x[4]-'0');
  	ds[i].nam=(x[6]-'0')*1000+(x[7]-'0')*100+(x[8]-'0')*10+(x[9]-'0');
  }
  sort(ds,ds+n,xuly);
  cout<<ds[n-1].name<<endl<<ds[0].name<<endl;
}

