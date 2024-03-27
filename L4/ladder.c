#include<stdio.h>

main()
{
	int number;
    
	printf("Enter The Number = ");
	scanf("%d", &number);
	
	if(number<0)
	{
		printf("This Number is Nagative");
	}
	else if(number==0)
	{
		printf("This Number is Neutral");
	}
	else
	{
		printf("This Number is Positive");
	}				
}