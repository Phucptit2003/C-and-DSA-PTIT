#include<bits/stdc++.h>
using namespace std;
int main(){
  ifstream f;
  f.open("Sinhvien.dat");
  if(f.fail()==true){
  	cout<<"Co cai nit!!";
  	return 0;
  }
  int n;
  cin>>n;
  float c;
  for(int i=1;i<=n;i++){
  	f>>c;
  	if(c>=7) cout<<c;
  }
}

