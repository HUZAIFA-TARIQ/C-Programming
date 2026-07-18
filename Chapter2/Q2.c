#include <stdio.h>

int main (void){
    float radius = 10, pi = 3.14, volume;
    volume = (4.0f/3.0f) * pi * ( radius * radius * radius);
    printf("%.2f", volume);
}