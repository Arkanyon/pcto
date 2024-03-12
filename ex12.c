#include <stdio.h> 

int main() 
{
    printf("number multiples calculator");
    long int a;
    long int b;
printf("input a random number\n");
scanf("%ld", &a);
printf("now input another number bigger\n");
scanf("%ld", &b);
if (b%a==0)
{
    printf("%ld is a multiple of %ld\n", a, b);
}
else if (a%b==0)
{
    printf("%ld is a multiple of %ld\n", b, a);
}
else 
{
    printf("they are not multiples of each other\n");
}
}