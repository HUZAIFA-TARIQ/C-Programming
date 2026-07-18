#include <stdio.h>

int main (void){
    int one=0, five=0, ten=0, twenty=0;
    int dollar, divisor;
    printf("Enter the amount $ : ");
    scanf("%d", &dollar);
    divisor = 20;
    while(dollar >=20){
        dollar = dollar- 20;
        twenty++;
    };
    while(dollar >= 10){
        dollar = dollar- 10;
        ten++;
    };
    while(dollar >= 5){
        dollar = dollar- 5;
        five++;
    }
    one = dollar;
    
    printf("$20 Bills: %d\n$10 Bills: %d\n$5 Bills: %d\n$1 Bills: %d",twenty,ten,five,one);
}