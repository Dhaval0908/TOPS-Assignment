// when function called itself it is called recursion

#include<stdio.h>

int i=0;
int main(){

	hello();
	return 0;
}

void hello()
{
	i++;
	printf("Hello function\n");
	
	if(i<5)
	{
		hello();
	}
}

