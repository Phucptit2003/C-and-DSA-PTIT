#include<bits/stdc++.h>
using namespace std;
int dem=0;
void chuanhoa(string &s){
	for(int i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
}
string chuanhoa1(string &s){
	stringstream ss(s);
	string c;
	vector<string>v;
	string v1="";
	while(ss>>c) v.push_back(c);
	for(int i=0;i<v.size();i++){
		v1+=v[i][0];
	}
	for(int i=0;i<v1.size();i++){
		v1[i]=toupper(v1[i]);
	}
	return v1;
}
bool check(string &s,string &p){
	stringstream ss(s);
	string c;
    vector<string>v;
	while(ss>>c) v.push_back(c);
	for(int i=0;i<v.size();i++){
		chuanhoa(v[i]);
		    if(v[i].find(p)!=string::npos){
					return true;
				}
}
return false;
}
struct GiangVien{
		string name,mon;
		string ma;
};
void nhap(GiangVien &gv){
		dem++;
		gv.ma="GV"+to_string(dem);
		while(gv.ma.size()<4) gv.ma.insert(2,"0");
		scanf("\n");
		getline(cin,gv.name);
		scanf("\n");
		getline(cin,gv.mon);
	}
void timkiem(GiangVien gv[],int n,string &s){
		cout<<"DANH SACH GIANG VIEN THEO TU KHOA "<<s<<":"<<endl;
		chuanhoa(s);
		for(int i=0;i<n;i++){
			if(check(gv[i].name,s)){
				cout<<gv[i].ma<<" "<<gv[i].name<<" "<<chuanhoa1(gv[i].mon)<<endl;
			}
	}
}

int main(){
    int n;
    cin>>n;
    GiangVien gv[n];
    for(int i=0;i<n;i++){
    	nhap(gv[i]);
	}
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		string s;
		cin>>s;
		timkiem(gv,n,s);
	}
}

