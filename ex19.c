#include <stdio.h> 

int main() 
{
    printf("insert a number\n");
    int a;
    scanf("%d", &a);
    int b = 2;
    int c = 13;

    while (b<a)
    {
        if (a%b==0)
        {
            c=14;
        }
        b++;
    }
    if (a==0 || a==1)
        {
            c=14;
        }
    if (c==13)
    {
        printf("a prime number \n");
    }
    else
    {
        printf("not a prime number\n");
    }

    

}