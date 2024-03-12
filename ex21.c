#include <stdio.h> 

int main() 
{

int a;
int b=0;
int c=1;

  while (a>0)
{
    printf("pick a number\n");
    scanf("%d", &a);
    float d = (a+b)/(float)c;
    printf("the current average is %.3f\n", d);
    b=b+a;
    c=c+1;
}

}