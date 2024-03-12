#include <stdio.h> 

int main() 
{
    printf("leap year check\n");
    printf("insert a year yyyy\n");
    long int a;
    scanf("%ld", &a);
    if (a%4==0)
    {
        if (a%100 != 0)
        {
            printf("it's a leap year!\n");
        }
        else
        {
         printf("it's not a leap year...\n");     
        }
    }
    else
    {
         printf("it's not a leap year...\n");
    }
}