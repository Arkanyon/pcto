#include <stdio.h> 

int main() 
{
    printf("arithmetic progression calculator\n");
    double a;
    double b;
    double c;
printf("input a random number\n");
scanf("%lf", &a);
printf("now input another number\n");
scanf("%lf", &b);
printf("now input one last number\n");
scanf("%lf", &c);
if (a-b==b-c)
{
    printf("the arithmetic progression is %lf %lf %lf\n", c, b, a);
}
else if (b-a==a-c)
{
    printf("the arithmetic progression is %lf %lf %lf\n", c, a, b);
}
else if (a-c==c-b)
{
    printf("the arithmetic progression is %lf %lf %lf\n", b, c, a);
}
else
{
    printf("there is no arithmetic progression between %lf %lf %lf\n", a, b, c);
}
}