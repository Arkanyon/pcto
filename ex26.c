#include <stdio.h> 

int main() 
{
    printf("word capital/lowercase converter \n\n");
    printf("insert a word:\n");
    int b=0;
    char parola[10000];
    
    scanf("%[^\n]s\n", parola);
    printf("\n");
    
    while (parola[b]!='\0')
    {
    if (parola[b]>90 && parola[b]<123)
    {
        parola[b]=parola[b]-32;
    }
    else
    {
        parola[b]=parola[b]+32;
    }
    b++;
    }
    printf("%s\n", parola);
    
}