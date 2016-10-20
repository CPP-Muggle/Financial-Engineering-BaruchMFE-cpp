// Swap() is implemented here and it exchanges the value of two variables.

#include <stdio.h>
#include <stdlib.h>


void Swap(float* x, float* y); //Function declaration for swap operation

int main (){


	printf("Program will display results up to accuracy of two decimal point\n");
	printf("----------------------------------------------------\n");


	float i ; float j ;

	printf("Enter any value for variable i:\n"); // Requesting a value for i.
	scanf("%f",&i);                              // Scan the inputted value.
	printf("Enter a value ofr variable j:\n");   // Requesting a value for j.
	scanf("%f",&j);                              // Scan the inputted value.
	printf("\n");

	printf("Vlaue of i before swapping : %0.2f\n",i); // Printing values before swapping.
	printf("Vlaue of j before swapping : %0.2f\n",j);
	printf("\n");

	Swap(&i, &j); // call the swapping function.

	printf("Value of i after swapping : %0.2f\n",i); // Printing values after swapping
	printf("Value of j after swapping : %0.2f\n",j);

	system("pause");
	return 0;

}

void Swap(float* i, float*j) // implementation of the swap function.

{	float temp;

		temp = *i;
		*i = *j;
		*j = temp;	}


