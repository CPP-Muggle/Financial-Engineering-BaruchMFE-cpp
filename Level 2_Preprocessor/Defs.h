// This header file includes two macros PRINT1 and PRINT2. 
// PRINT1 prints value of the variale a to the console.
// PRINT2 prints values of the variable a and variable b to the console.


#ifndef DEFS_H_INCLUDED
#define DEFS_H_INCLUDED


#define PRINT1(a) (printf("Output from PRINT1 macro(variable a): Accurate up to two decimal points: %0.2f\n",a))                  //definition of PRINT1 macro
#define PRINT2(a,b) (printf("Output from PRINT2 macro(variable a and b): Accurate up to two decimal points:  %0.2f %0.2f\n",a,b)) // definition of PRINT2 macro


#endif // DEFS_H_INCLUDED
