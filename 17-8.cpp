#include<stdio.h>
int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		long long n;
		scanf("%lld",&n);
		long long sum=n*(n+1)/2;
		printf("%lld\n",sum);
	}
}
