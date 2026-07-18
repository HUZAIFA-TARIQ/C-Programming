#include <stdio.h>

int main (void){
    float radius, pi = 3.14, volume;
    printf("Please enter the radius of sphere");
    scanf("%f", &radius);
    volume = (4.0f/3.0f) * pi * ( radius * radius * radius);
    printf("%.2f", volume);
}