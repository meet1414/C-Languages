#include<stdio.h>

void reverse(int *arr, int size) 
{
    int *a = arr;
    int *b = arr + size - 1;

    while(a<b) 
	{
        int temp = *a;
        *a = *b;
        *b = temp;
        
        a++;
        b--;
    }
}

int main() 
{
    int size;
    printf("Enter the array's size: ");
    scanf("%d", &size);

    int arr[size],i;
    printf("Enter array elements:\n");
    for(i=0; i<size; i++) 
	{
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    reverse(arr, size);

    printf("\nReversed array elements:\n");
    for(i=0; i<size; i++) 
	{
        printf("%d, ", arr[i]);
    }
    printf("\n");
}
