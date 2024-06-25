// take 3 subject marks from user find out total and pr
//if pr>= 80 grade A
//if pr>= 60 grade B
//if pr>= 35 grade C
//if pr< 35 fail
//if pr< 0 enter valid pr

#include<stdio.h>

int main(){

	float sub1,sub2,sub3;
	float total,pr;
	
	printf("Enter marks of subject1: ");
	scanf("%f",&sub1);
	
	printf("Enter marks of subject2: ");
	scanf("%f",&sub2);
	
	printf("Enter marks of subject3: ");
	scanf("%f",&sub3);
	
	total = sub1 + sub2 + sub3;
	printf("Your total marks: %.0f\n",total);
	
	pr = (total/300) * 100;
	printf("Your percentage: %.2f\n",pr);
	
	if(pr>=80){
		printf("You got grade A");
	}
	else if(pr>=60){
		printf("You got grade B");
	}
	else if(pr>=35){
		printf("You got grade C");
	}
		else if(pr<=0){
		printf("Enter valid marks!!");
	}
	else if(pr<35){
		printf("You Fail");
	}

	
	return 0;
}
	
