#include <stdio.h> 

int main() 
{
    int b;
    int a=0;
    char parola[b];
    scanf("%[^\n]s\n", parola);
    char minu[27]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'y', 'x', 'z', '\0'};
    char maiu[27]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'Y', 'X', 'Z', '\0'};
    
    a=0;
    while (a==b)
    {
        if (parola[a]==minu[a])
        {
            parola[a] = maiu[a];
        }
        if (parola[a]==maiu[a])
        {
            parola[a] = minu[a];
        }
        a++;
    }
    printf("%s\n", parola);
    
}