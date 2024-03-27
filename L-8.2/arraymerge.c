#include<stdio.h>
main() 
{
	
    int i,n1,n2,n,k;
    
    printf("Enter A array size: ");
    scanf("%d", &n1);
    printf("Enter B array size: ");
    scanf("%d", &n2);
    
	n = n1+n2;
    int a[n1], b[n2], merge[n];

    printf("\nEnter A array elements=\n");
    
    for(i=0;i<n1;i++) 
	{
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        merge[i] = a[i];
        k=i;
        k++;
    }
    
    printf("\nEnter B array elements=\n");
    for(i=0;i<n2;i++) 
	{
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
        merge[k] = b[i];
        k++;
    }

    printf("\nMerge of Array is = ");
    
    for(i=0;i<n;i++) 
	{
        printf("%d ",merge[i]);
    }
}
