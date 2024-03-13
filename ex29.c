#include <stdio.h>

float somma (float a, float b)
{
    float somma= a + b;
    return somma;
}
float differenza (float a, float b)
{
    float differenza= a - b;
    return differenza;
}
float prodotto (float a, float b)
{
    float prodotto= a * b;
    return prodotto;
}
float divisione (float a, float b)
{
    float divisione= a / b;
    return divisione;
}
int resto (int a, int b)
{
    int resto= a % b;
    return resto;
}
float main()
{
    float n1;
    float n2;
    float r[5];
    int k=0;

    scanf("%f %f", &n1, &n2);
    r[0]=somma(n1,n2);
    r[1]=differenza(n1,n2);
    r[2]=prodotto(n1,n2);
    r[3]=divisione(n1,n2);
    r[4]=resto(n1,n2);

    while (k<=4)
    {
    printf("%.2f\n", r[k]);
    k++;
    }
}


