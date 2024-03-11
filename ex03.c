#include <stdio.h> 

int main() 
{
int a;
char b;
char c;
char d;
long int e; 
long int f=1400;

printf("input your birth date nn mmm yyyy\n");
scanf("%d %c%c%c %ld", &a, &b, &c, &d, &e);
printf("picked date: %d %c%c%c %ld\n",a, b, c, d, e);
printf("your age if you are a demon god from the '400s: %ld˜\n \n", e-f);
    }