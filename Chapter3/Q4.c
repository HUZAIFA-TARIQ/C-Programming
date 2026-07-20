#include<stdio.h>

int a,b,c,d;
int e,f,g,h;
int i,j,k,l;
int m,n,o,p;

int main(void){
    printf("Enter the numbers from 1 to 16 in any order:");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p);
    printf("%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n",a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p);
    printf("row sums : %2d %2d %2d %2d\n", a+b+c+d, e+f+g+h, i+j+k+l, m+n+o+p);
    printf("columns sums : %2d %2d %2d %2d\n", a+e+i+m, b+f+j+n, c+g+k+o, d+h+l+p);
    printf("row sums : %2d %2d", a+f+k+p, d+g+j+m);
}