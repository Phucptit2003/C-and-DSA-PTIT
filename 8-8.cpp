#include<iostream>

using namespace std;

int checknt(int n){
	if(n%2!=0) return 0;
	while(n>2){
		n=n/2;
		if(n%2!=0) return 0;
	}
	return 1;
}

int main(){
	int n;
	cin>>n;
	int arr[100];
	int check=0;
	for(int i=0;i<n;i++){
		cout<<"arr["<<i<<"]:";
		cin>>arr[i];
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		if(checknt(arr[i])==1){
			check=1;
			cout<<arr[i];
			break;
		}
	} if(check==0) cout<<0;
}
