#include <stdio.h> 

int main() 
{
    int c;
    int d=0;
    printf("welcome to Xerine's Bakery, dear customer!\n");
    printf("I hope you're hungry :)\n");
    printf("may I take your order?\n");
    printf("...\n");
    printf("Oh sorry, the menu is not displayed, let me list all of our items then!\n\n");
    printf("Menú:\n");
    printf("Raspberry Cheese-mooncake 5$\n");
    printf("Ocean Marine Blueberry Smoothie 7$:\n");
    printf("Black Ribes Crystal Tart 8$\n");
    printf("Crimson Berry Guts Sponge Cake 8$\n");
    printf("Sinner's Macarons, today special Pride edition, 12$\n\n");
    printf("Which one do you want? (1) (2) (3) (4) (5) (6)\n");
     printf("your current budget: 6$...\n\n");
    while (d==0)
    {
    scanf("%d",&c);
    if (c==1)
    {
        printf("Excellent choice, I'll have it baked right now.\n");
d=1;
    }
    else if (c==2)
    {
        printf("Ah, this item has been sold out. So sorry, please pick another dish.\n\n");
d=0;
    }
    else if (c==3)
    {
        printf("Hmmm.\n");
        printf("It'll be ready in a minute.\n");
d=1;
    }
    else if (c==4)
    {
printf("I love that! Here it comes, be patient please.\n");
d=1;
    }
    else if (c==5)
    {
        printf("Great buds, hope you won't regret your choice!\n");
d=1;
    }
    else if (c==6)
    {
        printf("Oh... you've chosen the Secret item in our menu! How bold.\n");
        printf("Wait the time it will take me to 'lead' the dish out.\n");
d=1;
    }
    else  
    {
printf("Pardon, I did not hear what you've just said...\n\n");
d=0;
    }
    }
    printf("\n");

    

}