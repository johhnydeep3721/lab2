#include <stdio.h>

int main(){
    float a,b,c;
    printf("enter number a: ");
    scanf("%f", &a);
    printf("enter number b: ");
    scanf("%f", &b);
    printf("enter number c: ");
    scanf("%f", &c);

    if(a > b && a > c)
        printf("a is max %f",a);
    else if (b > a && b > c)
        printf("b is max %f", b);
    else if (c > a && c > b)
        printf("c is max %f", c);
   
    
    if(a < b && a < c)
        printf("\na is min %f", a);
    else if(b < a && b < c)
        printf("\nb is min %f", b);
    else if(c < a && c < b)
        printf("\nc is min %f",c);
}