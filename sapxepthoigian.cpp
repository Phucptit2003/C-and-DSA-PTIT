#include<bits/stdc++.h>
using namespace std;
struct Time{
	int gio,phut,giay;
};
 void nhap(Time &t){
 	cin>>t.gio>>t.phut>>t.giay;
 }
bool sapxep(Time p,Time q){
 	if(p.gio==q.gio){
 		if(p.phut==q.phut) return p.giay<q.giay;
 		else return p.phut<q.phut;
	 } else return p.gio<q.gio;
 }
int main(){
int n;
cin>>n;
Time t[n];
for(int i=0;i<n;i++){
	nhap(t[i]);
}
sort(t,t+n,sapxep);
for(int i=0;i<n;i++){
	cout<<t[i].gio<<" "<<t[i].phut<<" "<<t[i].giay<<endl;
}
}

