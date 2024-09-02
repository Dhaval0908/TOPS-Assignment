//(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include<stdio.h>

int main()
{
	int number , i , mul_total;
	
	printf("Enter number : ");
	scanf("%d",&number);
	
	for (i = 1; i <= number; i++)
	{			
		mul_total += i*i;
		
		printf("(%d * %d)",i,i);

		if(i != number)
		{
			printf(" * ");
		}
	
	}
	
	printf(" = %d ",mul_total-1);
	
	return 0;
}

