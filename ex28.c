#include <stdio.h> 

int main() 
{
    int numeri[8];
    int i1=0;
    int i2=1;
    int c=1;
    int t;
    printf("insert 8 numbers to reorder\n");
    scanf("%d %d %d %d %d %d %d %d", &numeri[0],&numeri[1],&numeri[2],&numeri[3],&numeri[4],&numeri[5],&numeri[6],&numeri[7]);
    printf("----------------------------\n");
    while (c>0)
    {
        c=0;
        i1=0;
        i2=1;
        while (i2<8)
        {
            if(numeri[i1]>numeri[i2])
            {
                t=numeri[i1];
                numeri[i1]=numeri[i2];
                numeri[i2]=t;
                c++;
            }
            i1++;
            i2++;
        }
    }
    int b=0;
    while (b<8)
    {
        printf("%d ", numeri[b]);
        b++;
    }
    printf("\n");
}