#include<bits/stdc++.h>
using namespace std;
int main(){
   ifstream f;
   ofstream g;
   f.open("N3S.INP.txt");
   g.open("N3S.OUT.txt");
   int m;
   f>>m;
   while(m--){
   	int k,M;
   	f>>k>>M;
   	int N=0;
   	for(int i=1;i<=k; ){
   		N+=1;
   		if((N*N-1)%3==0)i++;
	   }
	   g<<(N*N-1)%M<<"\n";
    }
   f.close();
   g.close();
}

