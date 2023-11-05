#include<bits/stdc++.h>
using namespace std;
int main(){
      list<int> ml;
    for(int i=1;i<=8;i++){
    	ml.push_back(i);
	}
	int k;
	cin>>k;
	int j=0;
	while(k<=ml.size()){
	for(int i=j;i<=k;i++){
		ml.reverse();
	}
	j=k;
	k=k+3;
   }
   for(int i=ml.begin();i!=ml.end();i++){
   	cout<<ml[i]<<" ";
   }
}

