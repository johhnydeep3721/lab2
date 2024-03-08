#include <stdio.h>

int main(){
    int a,b,c,d,e,f;
    int det,detx,dety;
    printf("enter number a: ");
    scanf("%d", &a);
    printf("\nenter number b: ");
    scanf("%d", &b);
    printf("\nenter number c: ");
    scanf("%d", &c);
    printf("\nenter number d: ");
    scanf("%d", &d);
    printf("\nenter number e: ");
    scanf("%d", &e);
    printf("\nenter number f: ");
    scanf("%d", &f);

    printf("\nsolving linear equation");
    printf("\n %dx +%dy = %d",a,b,c);
    printf("\n %dx +%dy = %d",d,e,f);

    det = a*e - b*d ;
    detx = c*e - b*f ;
    dety = a*f - c*d ;

    printf("\n x = %d",detx/det);
    printf("\n y = %d",dety/det);



}