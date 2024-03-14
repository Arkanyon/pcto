#include <stdio.h> 

float perimeter (float a,float b,float c)
{
float perimeter = a+b+c;
    return perimeter;
}

float squrt (float a,float b,float c)
{
  float f = (a+b+c)/2 * (((a+b+c)/2)-a) * (((a+b+c)/2)-b) * (((a+b+c)/2)-c);
  float temp, square; 
  square = f/2;
  temp = 0;
  while (square!=temp)
  {
    temp = square;
    square = (f/temp+temp)/2;
  }
} 

int main() 
{
printf("triangle values calculator\n");
    float a;
    float b;
    float c;
printf("input a side size\n");
scanf("%f", &a);printf("now input another side size\n");
scanf("%f", &b);printf("now input one last side size\n");
scanf("%f", &c);
if (a+b>c && b+c>a && a+c>b)
{
printf("it's a triangle, calculating the values...\n");
    
printf("---------------------------------------------------------\n");
printf("perimeter: %f\n", perimeter(a,b,c));
printf("area: %f\n", squrt(a,b,c));
}
else
{
printf("it's not a triangle\n");
}
}