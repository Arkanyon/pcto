#include <stdio.h> 

int main() 
{
    int a[7]={1,8888,3,69,7,1,1};
    int b=0;
    while (b<7)
    {
        printf("pick a chest (1-6):\n");
        scanf("%d", &b);
        if (b<7 && b>0)
        {
printf("you earned %d coin/s!\n\n", a[b]);
        }
        else if (b<0)
        {
printf("uhm? there is no negative-number chests...\n\n");
        }
        else
        {
printf("that chest does not exist!\n");
        }
    }
}