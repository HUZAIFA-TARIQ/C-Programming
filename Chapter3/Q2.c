#include<stdio.h>

int number, day, month, year;
float price;

int main(void){
    printf("Enter item number:");
    scanf("%d", &number);
    printf("Enter unit price:");
    scanf("%f", &price);
    printf("Enter purchase date (mm/dd/yyyy):");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("Item\tUnit\tPurchase\n");
    printf("\tPrice\tDate\n");
    printf("%d\t%.2f\t%02d/%02d/%04d", number, price, month, day, year);
}