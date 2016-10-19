#include<stdio.h>
#include <stdlib.h>


 
int main()
{
  float base, height, area;
    printf("Enter the base of triangle:\n");
    scanf("%f", &base);

   printf("Enter the height of triangle:\n");
   scanf("%f", &height);

   area = 0.5 * base  *height;

   printf("Area of the triangle:  %.2f\n",area);

  system("pause"); 
  return 0;
}