//WAP to accept 5 students name and store it in array

#include<stdio.h>
int main(){
	int i;
	char name[5][100];
	
    
	for(i=0;i<5;i++){
	printf("student %d: ",i+1);
		scanf("%s",&name[i]);
	}
	
	for(i=0;i<5;i++){
		printf("%s\t",name[i]);
	}
}
