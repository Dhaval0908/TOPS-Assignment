//3D 
#include<stdio.h>
int main()
{
	// 3X3 matrix
	int arr[3][3];
	int i,j;
	printf("enter total 9 values: ");
	for(i=0;i<3;i++)//row 0<3 1<3
	{
		for(j=0;j<3;j++)//0<3 1<3 3<3
						//0<3 1<3
		{
			scanf("%d",&arr[i][j]);//00 01  10 11
		}
	}
	for(i=0;i<3;i++)//row 0<3 1<3
	{
		for(j=0;j<3;j++)//0<3 1<3 3<3
						//0<3 1<3
		{
			printf("%d\t",arr[i][j]);//00 01  10 11
		}
		printf("\n");
	}
	
	
	return 0;
}
