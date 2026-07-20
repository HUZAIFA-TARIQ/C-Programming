#include<stdio.h>

int GS1_prefix, Group_identifier, Publisher_code, Item_number, Check_digit;
float price;

int main(void){
    printf("Enter ISBN:");
    scanf("%d-%d-%d-%d-%d", &GS1_prefix, &Group_identifier, &Publisher_code, &Item_number, &Check_digit);
    printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d", GS1_prefix, Group_identifier, Publisher_code, Item_number, Check_digit);
}