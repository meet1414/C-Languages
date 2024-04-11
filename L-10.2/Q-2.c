#include<stdio.h>
#include<string.h>

 void length()
{
	
	char a[100];
	int i,count = 0;
	
	printf("enter value = ");
	gets(a);
	
	for(i=0; a[i]!=NULL; i++)
	{
		count++;
	}
	printf("Length of String = %d",count);
}


void main()
{
	length();
}