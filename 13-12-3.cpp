#include<bits/stdc++.h>

using namespace std;

struct Gamethu{
	string user,pass,name,in,out;
	int time;
};
int Tach(string &s){
	int dem=0,dem1=0;
	for(int i=0;i<2;i++){
		dem=dem*10+s[i]-'0';
	}
	dem=60*dem;
	for(int i=3;i<5;i++){
		dem1=dem1*10+s[i]-'0';
	}
	dem=dem+dem1;
	return dem;
}
void Xuly(Gamethu gt[],int n){
	for(int i=0;i<n;i++){
		gt[i].time=Tach(gt[i].out)-Tach(gt[i].in);
	}
}
bool tmp(Gamethu &gt,Gamethu &gt1){
	if(gt.time==gt1.time) return gt.user<gt1.user;
	else return gt.time>gt1.time;
}
void In(Gamethu gt[],int n){
	for(int i=0;i<n;i++){
		cout<<gt[i].user<<" "<<gt[i].pass<<" "<<gt[i].name<<" ";
		printf("%d gio %d phut",gt[i].time/60,gt[i].time%60);
		cout<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	Gamethu gt[n];
	for(int i=0;i<n;i++){
		cin>>gt[i].user;
		cin>>gt[i].pass;
		scanf("\n");
		getline(cin,gt[i].name);
		cin>>gt[i].in;
		cin>>gt[i].out;
	}
	Xuly(gt,n);
	sort(gt,gt+n,tmp);
	In(gt,n);
}

