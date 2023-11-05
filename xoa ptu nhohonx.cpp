#include<iostream>
 using namespace std;
 
 int main(){
 	int n;
 	cin>>n;
 	int arr[1000];
 	for(int i=0;i<n;i++){
 		cout<<"arr["<<i<<"]:";
 		cin>>arr[i];
	 }
	 int x;
	 cout<<"Nhap x:";
	 cin>>x;
	 for(int i=0;i<n;i++){
	 	while(arr[i]<x){
	 		i=i+1;
		 }
	 	cout<<arr[i]<<" ";
	 }
 }
