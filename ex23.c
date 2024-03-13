#include <stdio.h> 

int main() 
{
    int a=1;
    while (a<21 && a!=13 && a>0)
    {
        printf("you have 20 values (1-20), extract the winning one.\n");
        scanf("%d", &a);
        if (a==13)
        {
            printf("you won!\n");
        }
        else if (a>20 || a<1)
        {
             printf("error occurred, value not found...\n");
        }
        else
        {
            printf("you lost :(\n");
            printf("try again!\n\n");
        }
    }
}