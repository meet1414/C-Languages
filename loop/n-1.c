#include<stdio.h>
main(){
    int i, end;


    printf("Print Any Number From 1 = ");
    scanf("%d", &end);

    i=1;
    while(i<=end)
    {
        printf("%d\n", i);
        i++;
    }

}