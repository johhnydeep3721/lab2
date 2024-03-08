#include <stdio.h>

int main(){
    int a,b;
    printf("input number a: ");
    scanf("%d", &a);
    printf("\n input number b: ");
    scanf("%d", &b);

    printf("\nthe number before swap ");
    printf("\nnumber a is: %d", a);
    printf("\nnumber b is: %d", b);

    // varible bien doi lien tuc
    a = a + b;
    b = a - b;
    a = a - b;

    printf("\n the number after swap ");
    printf("\n new number a is: %d", a);
    printf("\n new number b is: %d", b);

}
