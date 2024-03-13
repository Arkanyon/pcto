#include <stdio.h> 

int main() 
{
    int a=0;
    int b;
    while (b>0)
    {
        printf("pick the number of orders, knowing that each serve amounts to 5$ and you get a 10 percent discount over more than 30 serves and 15 over 50.\n");
        scanf("%d", &b);
        a=b+a;
        printf("the total amount of orders is %d.\n", a);
        if (a<50 && a>30)
        {
printf("the total cost is %.2f$.\n", (5*a - (float)((5*a)*10)/100));
        }
        else if (a>50)
        {
printf("the total cost is %.2f$.\n", (5*a - (float)((5*a)*15)/100));
        }
        else
        {
printf("the total cost is %.2f$.\n", (float)(5*a));
        }
        

    }
}