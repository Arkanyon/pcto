#include <stdio.h> 

int main() 
{
    int a;
    int b=1;
    printf("how many side eyes do you want?\n");
    scanf("%d", &a);
    printf("----------------------------------------------\n");
    while (b<=a)
    {
        printf("(@-@) ");
        b++;
    }
    printf("\n");
}