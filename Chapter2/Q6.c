#include <stdio.h>

int main (void){
    float x, result;
    printf("Enter value of x : ");
    scanf("%f", &x);
    result = (((((((((3*x)+2)*x)-5)*x)-1)*x)+7)*x) - 6;
    printf("%.2f", result);
}