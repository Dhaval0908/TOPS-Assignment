// Accept 5 names from user at run time

#include<stdio.h>

int main(){

	int i;
	char names[20];
	
	for(i=0;i<5;i++)
	{
		printf("Enter a name %d: ",i + 1);
		scanf("%s",&names);
		printf("%d. Given name is: %s\n\n",i + 1,names);
	}

	return 0;
}

