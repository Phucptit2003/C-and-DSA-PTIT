#include<bits/stdc++.h>
using namespace std;
int dem=0;
class NhanVien{
	public:
	string manv;
	string name,sex,date,address,thue,day;
	int ngay,thang,nam;
friend istream& operator>>(istream& input,NhanVien &nv){
	dem++;
	nv.manv=to_string(dem);
	while(nv.manv.size()<5) nv.manv="0"+nv.manv;
	cin.ignore();
	getline(cin,nv.name);
	cin>>nv.sex;
	cin>>nv.date;
	cin.ignore();
	getline(cin,nv.address);
	cin>>nv.thue;
	cin>>nv.day;
	nv.thang=(nv.date[0]-'0')*10+(nv.date[1]-'0');
  	nv.ngay=(nv.date[3]-'0')*10+(nv.date[4]-'0');
  	nv.nam=(nv.date[6]-'0')*1000+(nv.date[7]-'0')*100+(nv.date[8]-'0')*10+(nv.date[9]-'0');
  	return input;
}
friend ostream& operator<<(ostream& output,NhanVien nv){
		cout<<nv.manv<<" "<<nv.name<<" "<<nv.sex<<" "<<nv.date<<" "<<nv.address<<" "<<nv.thue<<" "<<nv.day<<endl;
   return output;
}
};
bool xuly(NhanVien &a,NhanVien &b){
	if(a.nam==b.nam){
		if(a.thang==b.thang) return a.ngay<b.ngay;
		else return a.thang<b.thang;
	} else return a.nam<b.nam;
}
void sapxep(NhanVien nv[],int n){
	sort(nv,nv+n,xuly);}
int main(){
     
    int N,i;
    cin >> N;
	NhanVien ds[N];
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}

