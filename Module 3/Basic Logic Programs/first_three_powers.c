// C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include<stdio.h>
#include<math.h>

int main(){

	int num,n,p;
	printf("enter number: ");
	scanf("%d",&num);
	
	printf("%d^1 = %d",num,num);
	printf("\n%d^2 = %d",num,num*num);
	printf("\n%d^3 = %d",num,num*num*num);
	
//	printf("enter number: ");
//	scanf("%d",&n);
//	printf("enter power: ");
//	scanf("%d",&p);
//
//	int ans = pow(n,p);
//	printf("%d",ans);

	return 0;
}

