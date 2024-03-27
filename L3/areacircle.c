#include<stdio.h>
main(){
	const float pi=3.14;
	float r,area;
	
	printf("enter redius of circle =");
	scanf("%f",&r);
	
	area=pi*r*r;
	printf("Area Of Circle = %0.2f",area);
}