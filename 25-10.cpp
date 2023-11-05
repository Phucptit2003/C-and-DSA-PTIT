#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector<int>v;
   if(n<3){
   	cout<<"IMPOSSIBLE"<<endl;
   	return 0;
   }
   int a=n/2+1;
   int i=a-1;
   while(a>0){
   	  int kc=(a-i)+1;
   	  int dem=(a+i)*kc/2;
   	  cout<<dem<<endl;
   	  if(dem>n){
   	  	a--;
   	  	i--;
   	  	int kc=(a-i)+1;
   	  	if((a+i)*kc/2>n){
   	  		while(i>0){
   	  			i--;
   	  			int kc=(a-i)+1;
   	            int dem=(a+i)*kc/2;
   	            if(dem==n){
   	            	v.push_back(i);
   	            	v.push_back(a);
   	            	goto Label;
				   }
				} 
				if(dem<n){
					cout<<"IMPOSSIBLE"<<endl;
					return 0;
				}
			 }
		 }
		else if(dem==n){
			v.push_back(i);
   	       	v.push_back(a);
   	       	goto Label;
		} 
//		else if(dem<n){
//			cout<<"IMPOSSIBLE"<<endl;
//			return 0;
//		}
   }
    Label:
   	  for(int i=v[0];i<=v[1];i++){
   	  	 cout<<i<<" ";
		 }
    return 0;
}

