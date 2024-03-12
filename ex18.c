#include <stdio.h> 

int main() 
{
    printf("the first step of humans on Moon: 1969, how many years before or after that were you born?\n");
    printf("input your year of birth\n");
    long int a;
    scanf("%ld", &a);
    if (a==1969)
    {
printf("you're a twin of human innovation! Same year: 1969!\n");
    }
    else if (a>1969)
    {
        printf("you were born just %ld year/s after 1969!\n", a-1969);
    }
    else
    {
        printf("you were born %ld year/s before 1969!\n", 1969-a);
    }
}