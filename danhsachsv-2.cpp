#include<bits/stdc++.h>
using namespace std;
void chuanhoa(string &v){
	v[0]=toupper(v[0]);
	for(int i=1;i<v.size();i++){
		v[i]=tolower(v[i]);
	}
}
struct SinhVien{
	string ma;
	string name;
	string lop;
	string ngay;
	float gpa;
};
void nhap(SinhVien sv[],int n){
	int dem=0;
	for(int i=1;i<=n;i++){
		dem++;
		string ma1=to_string(dem);
        while(ma1.size()<3){
        	ma1='0'+ma1;
		}
		sv[i].ma="B20DCCN"+ma1;
		cin.ignore();
		getline(cin,sv[i].name);
		cin>>sv[i].lop;
		cin>>sv[i].ngay;
		cin>>sv[i].gpa;	
	}
}
void in(SinhVien sv[],int n){
	for(int i=1;i<=n;i++){
	stringstream ss(sv[i].name);
	vector<string>v;
	string c;
	while(ss>>c){
		v.push_back(c);
	}
	for(int j=0;j<v.size();j++){
		chuanhoa(v[j]);
	}
		if(sv[i].ngay[2]!='/') sv[i].ngay='0'+sv[i].ngay;
		if(sv[i].ngay[5]!='/') sv[i].ngay.insert(3,"0");
		if(sv[i].gpa<4){
	cout<<sv[i].ma<<" ";
	for(int j=0;j<v.size();j++){
		cout<<v[j]<<" ";
	}
	cout<<sv[i].lop<<" "<<sv[i].ngay<<" "<<setprecision(2)<<fixed<<sv[i].gpa<<endl;
	
	}
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin>>N;
    nhap(ds,N);
    in(ds,N);
    return 0;
}


