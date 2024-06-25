//WAP to show difference between Structure and Union
// structure and union

#include<stdio.h>

struct employee1{
	int id;//4 byte
	char name[100];//100 byte
};

union employee2{
	int id;
	char name[100];//100
};

int main(){

	struct employee1 s_emp;//s_emp is structure variable
	union employee2 u_emp;//u_emp is union variable
	
	printf("Enter id and name for structure variable: ");
	scanf("%d %s",&s_emp.id,&s_emp.name);
	
	printf("id is %d and name is %s",s_emp.id,s_emp.name);
	
	printf("\n\nEnter id for union variable: ");
	scanf("%d",&u_emp.id);
	printf("id is %d",u_emp.id);
	
	printf("\nEnter name for union variable: ");
	scanf("%s",&u_emp.name);
	printf("name is %s",u_emp.name);
	
	printf("\n\n%d is size of structure",sizeof(s_emp));
	
	printf("\n%d is size of union",sizeof(u_emp));

	return 0;
}

