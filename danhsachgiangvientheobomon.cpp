#include<bits/stdc++.h>
using namespace std;
int stt=0;
struct GiangVien{
	string dem,name,mon;
};
void nhap(GiangVien &gv){
    stt++;
	gv.dem="GV"+to_string(stt);
	while(gv.dem.size()<4) gv.dem.insert(2,"0");

	scanf("\n");
	getline(cin,gv.name);
//	scanf("\n");
//	cin.ignore();
	getline(cin,gv.mon);
	
}
string chuanhoa(string &s){
	string res="";
	stringstream ss(s);
	vector<string>v;
	string c;
	while(ss>>c) v.push_back(c);
	for(int i=0;i<v.size();i++){
		v[i][0]=toupper(v[i][0]);
		res+=v[i][0];
	}
	return res;
}
void in(GiangVien gv[],int n,string &p){
	
	cout<<"DANH SACH GIANG VIEN BO MON "<<chuanhoa(p)<<":"<<endl;
	for(int i=0;i<n;i++){
		if(gv[i].mon==p){
			cout<<gv[i].dem<<" "<<gv[i].name<<" "<<chuanhoa(gv[i].mon)<<endl;
		}
	}
}
int main(){
    int n;
    cin>>n;
    GiangVien ds[n];
    for(int i=0;i<n;i++){
    	nhap(ds[i]);
	}
	
	int t;
	cin>>t;
	string q;
	vector<string>p;
	cin.ignore();
	for(int i=0;i<t;i++){
		getline(cin,q);
		p.push_back(q);
	}
	for(int i=0;i<p.size();i++){
		in(ds,n,p[i]);
	}
	
}

