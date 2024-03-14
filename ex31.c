#include <stdio.h> 

int main() 
{
   float a;
   float b;
   printf("Pick two coordinates 'x''y' for the point P\n");
   scanf("%f %f", &a, &b); 
   if (a>0 && b>0)
   {
printf("P is located in the first quadrant\n");
   }
   else if (a<0 && b>0)
   {
printf("P is located in the second quadrant\n");
   }
   else if (a<0 && b<0)
   {
printf("P is located in the third quadrant\n");
   }
   else if (a>0 && b<0)
   {
printf("P is located in the fourth quadrant\n");
   }
   else if (a==0 && b>0 || b<0)
   {
printf("P is located in axis x\n");
   }
   else if (a<0 || a>0 && b==0)
   {
printf("P is located in axis y\n");
   }
   else
   {
    printf("P is located in the origin\n");
   }
}