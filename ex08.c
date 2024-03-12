#include <stdio.h> 

int main() 
{
    printf("pick a n number\n");
    int a;
    scanf("%d", &a);
    if (a>10)
    {
        printf("maggiore di 10\n");
    }
    else if(a==5)
    {
        printf("uguale a 5\n");
    }
    else if (a>5)
    {
        printf("maggiore di 5\n");
    }
    else 
    {
        printf("minore di 5\n");
    }
}