#include <stdio.h>

int main (void){
    float loan, interest, monthly_payment;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);
    
    float monthly_interest = (float)6/(100*12);
    
    for(int a =0; a<=2; a++){
        loan = ((loan) + (loan * monthly_interest))-monthly_payment;
        printf("%.2f\n", loan);
    }
}