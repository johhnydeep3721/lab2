#include <stdio.h>
#include <conio.h>
int main(){
    float Celsius, F;

    printf("please enter temperature: ");
    scanf("%f", &Celsius);
    F = (9/5*Celsius) + 32;
    printf("\n the temprature from Centigrade to Fahrenheigh is: %f",F);

}