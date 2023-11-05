#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int dao=0;
        while(n>0){
            dao=dao*10+n%10;
            n/=10;
        }
        cout<<dao<<endl;
    }
}