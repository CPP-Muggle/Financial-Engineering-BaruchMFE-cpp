// This program prints the contents of a struct called Article using print() function.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function declaration for print function.
void print(struct Article* art_name);

//Definition for the struct "Article"
struct Article

{
	int Article_number;
    int Quantity;
    char Description[20+1];
};


int main ()
	{

     struct Article Article1 = {2,2,"Test_Article"};

	 // Following assignment is also possible. string.h header file will be used here.
	 	    /* Article1. Article_number = 1;
           Article1. Quantity = 1;
           strcpy( Article1. Description, "Test_Article" );*/

	 print(&Article1);

	 system("pasuse");
     return 0;

	}


//Implementation of print function.
void print(struct Article* art_name)
{
	printf("(Article Number: %d)\n", art_name -> Article_number);
	printf("(Article Quantity: %d)\n",art_name->Quantity);
	printf("(Article Description: %s)\n",art_name->Description);
	printf("\n");

}
