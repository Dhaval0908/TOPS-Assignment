// Find the area of a Rectangular prism formula : A=2(wl+hl+hw)

#include<stdio.h>
int main(){
	
	int w,h,l,area;
	
	printf("Enter value of width of rectangular prism: ");
	scanf("%d",&w);
	
	printf("Enter value of height of rectangular prism: ");
	scanf("%d",&h);
	
	printf("Enter value of lenght of rectangular prism: ");
	scanf("%d",&l);
	
	area = 2 * (w*l + h*l + h*w);
	printf("area of a rectangular prism: %d",area);
	
	return 0;
}
