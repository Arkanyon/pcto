#include <stdio.h> 

int main() 
{
    printf("Temperature converter (celsius)\n");
    printf("insert a temperature in Celsius notation\n");
    double a; 
    float b = -273.15;
    scanf("%lf", &a);
    if (a<b)
    {
         printf("system error, inserted temperature is below absolute zero\n");
    }
    else
    {
        printf("Fahrenheit\n");
         printf("%.2lf\n", a * 9/5+32);
        printf("Kelvin\n");
         printf("%.2lf\n", a+273.15);
    }
}