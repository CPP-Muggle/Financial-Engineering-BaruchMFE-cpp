/* Defs.h header file  is included here and it has PRINT1 and PRINT2 macros.
User inputted two variables a and b  are printed using those two macros*/


#include <stdio.h>
#include "Defs.h"

int main()
{

 float a,b;

 
 printf("Input two variables a and b: "); // User input is requesting here.
 scanf("%f %f",&a,&b);                    // Inputted values are scanning and assigning to the variables.
 printf("\n");



 PRINT1(a);    // call PRINT1 macro
 PRINT2(a,b);  // call PRINT2 macro

 return 0;
}
