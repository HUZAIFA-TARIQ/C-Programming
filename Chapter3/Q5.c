#include<stdio.h>

int num_1, denom_1, num_2, denom_2;

int main(void){
    printf("Enter two fractions separated by a plus sign:");
    scanf("%d/%d+%d/%d",&num_1, &denom_1, &num_2, &denom_2);
    printf("%d/%d", (num_1*denom_2)+(num_2*denom_1), denom_1*denom_2);
    return 0;
}