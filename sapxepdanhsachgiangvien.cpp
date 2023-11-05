#include<bits/stdc++.h>
using namespace std;
int dem=0;
void chuanhoa(string &s){
	string d="";
	stringstream ss(s);
	vector<string>v;
	string c;
	while(ss>>c) v.push_back(c);
	for(int i=0;i<v.size();i++){
		v[i][0]=toupper(v[i][0]);
		d+=v[i][0];
	}
	cout<<d;
}
struct GiangVien{
	string stt, name,mon;
};
void nhap(GiangVien &gv){
	dem++;
	gv.stt="GV"+to_string(dem);
	while(gv.stt.size()<4) gv.stt.insert(2,"0");
	scanf("\n");
	getline(cin,gv.name);
	getline(cin,gv.mon);
}
bool check(GiangVien &a,GiangVien &b){
	stringstream ss(a.name);
	vector<string>v;
	string c;
	while(ss>>c) v.push_back(c);
	
	stringstream ss1(b.name);
	vector<string>v1;
	string c1;
	while(ss1>>c1) v1.push_back(c1);
	
	if(v[v.size()-1]==v1[v1.size()-1]) return a.stt<b.stt;
	else return v[v.size()-1]<v1[v1.size()-1];
}
void in(GiangVien gv[],int n){
	sort(gv,gv+n,check);
    for(int i=0;i<n;i++){
    	cout<<gv[i].stt<<" "<<gv[i].name<<" ";
		chuanhoa(gv[i].mon);
		cout<<endl;
//		cout<<gv[i].name[0]<<endl;
	}	
}
int main(){
       int n;
       cin>>n;
       GiangVien ds[n];
       for(int i=0;i<n;i++){
       	nhap(ds[i]);
	   }
	in(ds,n);
}

