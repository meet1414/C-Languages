#include <stdio.h>

int main() {
    int startYear, endYear;

    printf("Enter the starting year: ");
    scanf("%d", &startYear);

    printf("Enter the ending year: ");
    scanf("%d", &endYear);

    printf("Leap years within the range %d to %d:\n", startYear, endYear);

    for (int year=startYear; year<=endYear; year++) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d\n", year);
        }
    }

    return 0;
}