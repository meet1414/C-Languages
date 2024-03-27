#include<stdio.h>
main(){
	const float pi =3.14;
	float r,perimeter;
	
	printf("Enter Redius Of Circle =");
	scanf("%f",&r);
	
	perimeter=2*pi*r;
	printf("Perimeter Of Circle = %0.2f",perimeter);
}