#include <stdio.h>
int stringLength(char *str) {
    int length = 0;
    while (*str) {       
        length++;
        str++;         
    }
    return length;
}
int main() {
    char input[100];

    
    printf("Enter a string =");
    gets(input);      
    printf("Length of the string: %d\n", stringLength(input));

    return 0;
}