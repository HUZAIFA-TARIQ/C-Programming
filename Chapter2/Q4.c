#include <stdio.h>

int main (void){
    float dollar_amount, tax = 5, total_amount;
    printf("Enter an amount : ");
    scanf("%f", &dollar_amount);
    total_amount = dollar_amount + (dollar_amount * 0.05);
    printf("%.2f", total_amount);
}