#include<stdio.h>
#include<math.h>
int main(){
	int bo;
	long a;
	scanf("%d",&bo);
	while(bo--){
	
	scanf("%d",&a);
	if (sqrt(a)==(int)sqrt(a))
	{
		printf("YES");
	}
	else{
		printf("NO");
	}
	printf("\n");
}
}
