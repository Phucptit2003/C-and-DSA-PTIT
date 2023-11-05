#include<bits/stdc++.h>
using namespace std;
int main(){
	ifstream f;
	ofstream g;
	f.open("Input.txt");
	g.open("Output.txt");
   int test;
   f>>test;
   while(test--){
   	int n;
   	f>>n;
   	int a[1000];
   	for(int i=0;i<n;i++){
   		f>>a[i];
	   }
   int min=1000000;
   for(int i=0;i<n;i++){
   	if(a[i]<min){
   		min=a[i];
	   }
   }
   for(int i=0;i<n;i++){
   	if(a[i]==min){
   		g<<i+1<<" ";
	   }
   } g<<endl;
}
   f.close();
   g.close();
}

