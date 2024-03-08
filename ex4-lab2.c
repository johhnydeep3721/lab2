#include <stdio.h>

int main() {
    int year;
    printf("enter year: ");
    scanf("%d", &year);

    if(year % 4 == 0)
        printf("\nit is a leap year");
    else
        printf("\nit is not a leap year");
}