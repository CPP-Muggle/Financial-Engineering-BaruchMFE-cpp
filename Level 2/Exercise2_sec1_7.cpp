 /*Calculate the length of a string */

# include <stdio.h>
# include <stdlib.h>
# define MAXLINE 30

//String length declaration
int Length (char str[]);

int main () {

	char string[MAXLINE+1]; //Line of maximum 30 chars +\0
	int c; // The input character
	int i=0;  // The counter

	//Print intro text
	printf("Type up to %d chars. Exit with CTRL+D\n",MAXLINE);

	//Get the characters 
	
	while ( (c=getchar())!=EOF && i<MAXLINE && c!=4)
		{//Append entered characters to string
	      string[i++] = char(c);
	    }
	string[i] ='\0'; //String must be closed with \0
	printf("String length is (Including white spaces): %d\n",Length(string));

	system ("pause");
	return 0;

}

/*Implement the Length() function here*/
int Length(char str[]) // Here Length function gets the address of the array (whihch is address of the &str[0])
{	int n ;
	for (n = 0 ; *str !='\0'; str++) {n++;} // When *str[n+1] == '\0' for loop terminates and value of n returns
	return n;
}