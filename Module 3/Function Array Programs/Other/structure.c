//structure is like datatype
//take id, name of 5 employees and print it

struct employee
{
	int id;
	char name[100];
};

#include<stdio.h>

int main(){

//	struct employee e1,e2;
//	printf("Enter id for employee 1: ");
//	scanf("%d",&e1.id);
//	printf("Enter name for employee 1: ");
//	scanf("%s",&e1.name);
	
	//structure with array
	struct employee emp[2];
	int i;
	
	//get value
	for(i=0;i<2;i++)
	{
		printf("Enter id for %d employee: ",i+1);
		scanf("%d",&emp[i].id);
		printf("Enter name for %d employee: ",i+1);
		scanf("%s",&emp[i].name);
	}
	
	//print value
	for(i=0;i<2;i++)
	{
		printf("\n%d is id and %s is name of %d employee",emp[i].id,emp[i].name,i+1);
	}

	return 0;
}

