#include<bits/stdc++.h>
using namespace std;
void showlist(list<int> g)
{   
    
    list<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout <<*it<<" ";
    cout << '\n';
}
int main(){
     list<int>ls;
     list<int>ls1;
     list<int>ls2;
     int n;
     cin>>n;
     for(int i=1;i<=n;i++){
     	ls.push_back(i);
	 }
	 int k;
	 cin>>k;
	 int dem=0;
	 for(int x:ls){
	 	dem++;
	 	if(k>ls.size()){
	 		ls1.push_back(x);
	 		if(x==ls.size()){
	 			ls1.reverse();
			for(int y:ls1){
				ls2.push_back(y);
			}
			ls1.clear();
			k=0;
			}
		 }
	 	else{
	 		
	 	if(dem<=k){
	 		ls1.push_back(x);
		 }
	    if(dem==k){
			ls1.reverse();
			for(int y:ls1){
				ls2.push_back(y);
			}
			ls1.clear();
          k+=k;
		}
	    }
	 }
	showlist(ls2);
}

