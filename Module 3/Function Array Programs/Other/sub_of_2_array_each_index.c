// sub of 2 array of each index

#include<stdio.h>

int main(){

	int n,i;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int arr1[n],arr2[n],result[n];
	
	printf("\n---Enter values for 1st array---\n");
	
	for(i=0;i<n;i++)
	{
		printf("Enter %d value: ",i);
		scanf("%d",&arr1[i]);
	}
	
	printf("\n---Enter values for 2nd array---\n");
	
	for(i=0;i<n;i++)
	{
		printf("Enter %d value: ",i);
		scanf("%d",&arr2[i]);
	}
	
	for(i=0;i<n;i++)
	{
		result[i]=arr1[i]-arr2[i];
	}
	
	printf("\n---Result array---\n");
	for(i=0;i<n;i++)
	{
		printf("%d is index: %d is value\n",i,result[i]);
	}

	return 0;
}

