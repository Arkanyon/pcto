#include <stdio.h> 

int main() 
{
    int a;
    printf("write your age down\n");
    scanf("%d", &a);
    if (a>=18)
    {
        printf("you're an adult\n");
    }
    else
    {
        printf("you're a minor\n");
    }
}