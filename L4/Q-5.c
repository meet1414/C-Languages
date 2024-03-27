#include <stdio.h>

main(){
    float x, y, Answer;

    printf("Enter The value of X: ");
    scanf("%f", &x);

    printf("Enter The value of Y: ");
    scanf("%f", &y);

    Answer = (x + y)*(x + y)*(x + y);

    printf("\n The Answer of Formula (x+y)^3 is : %0.2f", Answer);
}