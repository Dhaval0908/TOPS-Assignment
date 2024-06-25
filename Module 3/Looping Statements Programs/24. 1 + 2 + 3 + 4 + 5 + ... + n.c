// 1 + 2 + 3 + 4 + 5 + ... + n

#include<stdio.h>

int main(){

	int n,total,i;
	
	printf("Enter number: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		total += i;
		printf("%d",i);
		
		if(i != n)
		{
			printf(" + ");
		}
	}
	
	printf(" = %d",total);

	return 0;
}

