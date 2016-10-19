/*Operators*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;

	x=-3+4*5-6;
	printf("x=%d\n",x); // Output is 11

	
	x=3+4%5-6;
	printf("x=%d\n",x); //Output is 1

	x=-3*4%-6/5;
	printf("x=%d\n",x); //Output is 0

	x=(7+6)%5/2;
	printf("x=%d\n",x); //Output is 1


	system("pause");
	return 0;
}