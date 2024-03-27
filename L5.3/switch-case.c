#include<stdio.h>
main(){
	int a,b,c;
	
	printf("Enter value A =");
	scanf("%d",&a);
	printf("Enter value B =");
	scanf("%d",&b);
	printf("Enter value C =");
	scanf("%d",&c);
	
	(a<b)?(a<c)? printf("A is Max") : printf("C is Max")
		  :(b<c)? printf("B is Max") : printf("C is Max");
	
}