#include<stdio.h>

main() {
    int p,q,r;

    printf("Enter The Value of A : ", p);
    scanf("%d", &p);
    printf("Enter The Value of B : ", q);
    scanf("%d", &q);

    r = p;
    p = q;
    q = r;

	printf("\n After Change \n");
	printf("\nA = %d \n", p);
    printf("B = %d", q);
}