/*
        5
      4 5 4
    3 4 5 4 3
  3 3 4 5 4 3 2
1 2 3 4 5 4 3 2 1
*/

#include<stdio.h>

main(){
	
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{
		for(k=5;k>i;k--)
		{
			printf("  ");
		}
		for(j=5-i+1;j<=5;j++)
		{
			printf("%d ", j);
		}	
		for(j=4;j>5-i;j--) 
		{
            printf("%d ", j);
        }
		printf("\n");
	}
}
