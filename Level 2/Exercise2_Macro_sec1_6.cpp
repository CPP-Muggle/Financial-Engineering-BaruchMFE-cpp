//Both Macros are defined inside "Defs.h".
//MAX2(x,y) takes 2 inputs and returns the larger one. 
//MAX3(x,y,z) takes 3 inputs and returns  the largest one

#include <stdio.h>
#include <stdlib.h>
#include "Defs.h"

int main()
{
 float x,y,z;
 printf("Input three variables x, y, and z : "); // Requesting input from the user.
 scanf("%f%f%f",&x,&y,&z);
 printf("\n");

 printf("Larger value of the set [x,y]: Accuracy up to one decimal point :%0.1f\n", MAX2(x,y));   // Call for Macro MAX2(x,y) and print the return value.
 printf("Larget value of the set [x, y, z]: Accuracy up to one decimal point :%0.1f\n", MAX3(x,y,z) ); // Call for Macro MAX3(x,y,z) and print the return value.

 system ("pause");
 
 return 0;
}
