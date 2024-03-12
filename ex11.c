#include <stdio.h> 

int main() 
{
    long int a;
    long int b;
printf("input the age in which you can get the drivers license in the state you're living\n");
scanf("%ld", &a);
printf("now input your current age\n");
scanf("%ld", &b);
if (b>=a)
{
    printf("you can get the license :)\n");
}
else
{
    printf("you can't get the license :(\n");  
}
} 