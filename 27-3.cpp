#include<bits/stdc++.h>

using namespace std;

int main(){
//	sang(); 
    int n,dem=0;
    scanf("%i",&n);
    while(n){
    	int a,b;
		scanf("%i%i",&a,&b);
		for(int i=a;i<=b;i++){
			if(check(i)==1&&tn(i)==1){
				dem++;
				printf("%i ",i);
				if(dem==10) {
				printf("\n");
				dem=0;
				} 
			}
		} 
		n--; 
		printf("\n"); 
		printf("\n");
	} 
}

