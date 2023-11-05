#include<bits/stdc++.h>
using namespace std;
struct Xe{
	string bienso,loai;
	int socho;
	string luot,date;
	long long gia;
};
void check(Xe &xe){
	if(xe.luot=="OUT"){
		xe.gia=0;
	} else if(xe.luot=="IN"){
	if(xe.loai=="Xe_con"){
		if(xe.socho==5)
		xe.gia=10000;
		else if(xe.socho==7)
		xe.gia=15000;
	} else if(xe.loai=="Xe_tai"){
		xe.gia=20000;
	} else if(xe.loai=="Xe_khach"){
		if(xe.socho==29) xe.gia=50000;
		else if(xe.socho==45) xe.gia=70000;
	}
}
}
void Xuly(Xe xe[],int n){
	vector<string>v;
	vector<long long>v1;
	long long sum=xe[0].gia;
	for(int i=1;i<n;i++){
		if(xe[i].date==xe[i-1].date){
			sum+=xe[i].gia;
		} else{
			v.push_back(xe[i-1].date);
			v1.push_back(sum);
			sum=0;
			sum+=xe[i].gia;
		}
		if(i==n-1){
			v.push_back(xe[i].date);
			v1.push_back(sum);
		}
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<": "<<v1[i]<<endl;
	}
}
int main(){
    int n;
    cin>>n;
    Xe xe[n];
    for(int i=0;i<n;i++){
    	cin>>xe[i].bienso;
    	cin>>xe[i].loai;
    	cin>>xe[i].socho;
    	cin>>xe[i].luot;
    	cin>>xe[i].date;
    	check(xe[i]);
	}
	Xuly(xe,n);
}

