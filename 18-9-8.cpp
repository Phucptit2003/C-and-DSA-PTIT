#include<bits/stdc++.h>
using namespace std;
int main(){
  ifstream f;
  ofstream t;
  f.open("PTIT.in");
  t.open("PTIT.out");
  string s;
  while(f>>s){
  	t<<s<<endl;
  }
  f.close();
  t.close();
}

