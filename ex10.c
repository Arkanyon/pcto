#include <stdio.h> 

int main() 
{
    printf("pick two numbers\n");
     long int a;
     long int b;
    scanf("%ld %ld", &a, &b);

    if (a==b)
    {
        printf("they are twinsies, congrats\n ");
    }
    else if (a>b)
    {
        printf("%ld is older than %ld \n", a, b);
    }
    else 
    {
        printf("%ld is older than %ld \n", b, a);
    }
    
}