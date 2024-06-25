//MD 
#include<stdio.h>
int main()
{
	int n;
	printf("Enter value of number of array matrix: ");
	scanf("%d",&n);
	
	int arr[n][n];
	int i,j;
	printf("enter total %d values: ",n*n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
						
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
						
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
