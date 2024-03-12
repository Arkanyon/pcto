#include <stdio.h> 

int main() 
{
    printf("triangle type check\n");
    double a;
    double b;
    double c;
printf("input a random number as a side of a triangle\n");
scanf("%lf", &a);
printf("now input another number as a side of a triangle\n");
scanf("%lf", &b);
printf("now input one last number as a side of a triangle\n");
scanf("%lf", &c);
if (a+b>c && a+c>b && b+c>a)
{
    if (a==b && b==c && a==c)
    {
        printf("it's an equilateral triangle\n");
    }
    else if (a!=b && b!=c && a!=c)
    {
        printf("it's a scalene triangle\n");
    }
    else
    {
        printf("it's an isosceles triangle\n");
    }
}
else
{
    printf("it's not a triangle\n");
}
}