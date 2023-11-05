#include<iostream>
using namespace std;
void change(int n){
    int *ptr=&n;
    *ptr=6;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
}
int main(){
    int n;
    cin>>n;
    cout<<n<<endl;
    change(n);
}
