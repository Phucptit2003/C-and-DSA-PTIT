#include<bits/stdc++.h>

using namespace std;

int Dx(long long n){
    string s=to_string(n);
    int len=s.size();
    if(len<2) return 1;
    for(int i=0;i<=len/2;i++){
    	if(s[i]!=s[len-1-i]){
    		return 0;
		}
	}
	return 1;
}
int Check(long long n){
	if(n<2) return 0;
	if(Dx(n)){
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0) return 0;
		}
		return 1;
	}
	else return 0;
}
int main(){
   long long a,b;
   cin>>a>>b;
   for(long long i=a;i<=b;i++){
   	 if(Check(i)){
   	 	cout<<i<<endl;
		}
   }
}

