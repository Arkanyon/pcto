#include <stdio.h> 

int main() 
{
    printf("triangle existence check\n");
    double a;
    double b;
    double c;
printf("input a random number\n");
scanf("%lf", &a);
printf("now input another number\n");
scanf("%lf", &b);
printf("now input one last number\n");
scanf("%lf", &c);
if (a+b>c && b+c>a && a+c>b)
{
    printf("it's a triangle\n");
}
else
{
    printf("it's not a triangle\n");
}
}