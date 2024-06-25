// Display Your Information


#include<stdio.h>
int main(){
	
	int age;
	char name[50],add[100],bday[15];
	
	printf("Enter your name: ");
	scanf("%s",&name);
	
	printf("Enter your birtdate: ");
	scanf("%s",&bday);
	
	printf("Enter your age: ");
	scanf("%d",&age);
	
	printf("Enter your address: ");
	scanf("%s",&add);
	
	
	printf("Your name is: %s\n", name);
	printf("Your birthdate is: %s\n", bday);
	printf("Your age is: %d\n", age);
	printf("Your address is: %s\n", add);
	
	
	return 0;
}
