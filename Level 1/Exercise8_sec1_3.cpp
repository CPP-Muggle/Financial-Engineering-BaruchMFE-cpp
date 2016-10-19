/* Assignment operators */

# include <stdio.h>
# include <stdlib.h>

int main() 
{  
	int x=2;
	int y;
	int z;

	x*=3+2 ;
	printf("x=%d\n",x); // Output is 10;

	x*=y=z=4;
	printf("x=%d\n",x); // Output is 40;

	x=y==z;
	printf("x=%d\n",x); // Output is 1;

	system("pause");
	return 0;

}
