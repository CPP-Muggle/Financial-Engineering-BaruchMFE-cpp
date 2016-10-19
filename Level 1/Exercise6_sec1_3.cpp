#include <stdio.h>
#include <stdlib.h>


int main ()

{   int input;
    int output;


    printf("Please enter any integer: ");
    scanf("%d",&input);

    output = input >> 2;

if (input<0)
    {
        printf("Negative number was inserted.\n");
        printf("Arithmetic Right shift will be performed.\n");

    }
    else
    {
        printf("Positive number was inserted.\n");
        printf("Logical Right shift will be performed.\n");


    }
    printf("========================================================\n");
    printf ("The input number  was shifted two places to the right\n");
    printf ("The output number is : %d\n", output);
    
    system("pause");

}
