// This program reads the characters from the keyboard and shows them on the screen when the user hits 'enter'.
//CTRL+A terminates the program.


#include <stdio.h>
#include <stdlib.h>


int main() {

    int c;
    printf("Print anything you want and hit enter(Terminate the input process with Ctrl+A):\n");

    while ((c=getchar())!=1) { // getchar() fucntion gets all the characters user has inputted
        putchar(c); // putchar() fucntion put all the characters in the buffer.

        if (c=='\n')
        {printf("\n");}
                             }


    while((c=getchar())==1); { //termination condition. ASCII value for CTRL+A.

        printf("\n");
        printf("CTRL+A is a correct ending.");
        printf("\n");
                             }

	system ("pause");
	return 0;


}
