#include<stdio.h>
main()
{
	int n,i;
	printf("size of array elements =");
	scanf("%d",&n);
	int a[n],b[n],sum[n];
	
	printf("enter A array elements =\n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("enter B array elements =\n");
	
	for(i=0;i<n;i++)
	{
		printf("b[%d] = ",i);
		scanf("%d",&b[i]);
	}
	
	printf("sum of 2 array = ");
	 for(i=0;i<n;i++)
	 {
	 	sum[i] = a[i] + b[i];
	 	printf("%d", sum[i]);
	 }
	
}