#include <stdio.h>

main() {
    int p, q;

    printf("Enter The value of A: ");
    scanf("%d", &p);
    printf("Enter The value of B: ");
    scanf("%d", &q);

    p = p + q;
    q = p - q;
    p = p - q;
	
	printf("\n After Chnage \n");
	printf("\nA = %d \n", p);
    printf("B = %d", q);
}
