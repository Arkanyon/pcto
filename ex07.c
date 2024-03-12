#include <stdio.h> 

int main() 
{
    char a;
    char b;
    char c;
    char d;
    char e;
    

printf("guess the word: xxxxx\n");
printf("pick a letter\n");
scanf("%c", &a);
if (a == 'm')
{
    printf("%c%c%c%c%c\n", a, b, c, d, e);
}
else if (a == 'a')
{
    printf("%c%c%c%c%c\n", b, a, c, d, e);
}
else if (a == 'n')
{
     printf("%c%c%c%c%c\n", b, c, a, d, e);
}
else if (a == 'g')
{
    printf("%c%c%c%c%c\n", b, a, d, a, e);
}
else if (a == 'o')
{
     printf("%c%c%c%c%c\n", b, c, e, d, a);
}
else
{
printf("you got it wrong, try again\n");
}

}