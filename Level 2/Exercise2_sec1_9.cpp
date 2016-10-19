// This program reads the characters from the keyboard and writes them to a file specified by the user.

#include <stdio.h>
#include <string.h>


int main() {

    char filename[50];
    printf("Enter the name of the file you want data to store(Max-length of file name: 50 characters):\n"); //Requesting file name from user.
    scanf("%s",filename);
    strcat(filename,".txt");
	printf("\n");

    FILE * pFile; //Declare a memory location to store memory address of the user specified file.
    pFile = fopen (filename,"w"); //User specified file is opened and memory location of the file is stored at pFile now.


    int c;
    printf("Print anything you want and hit enter. Terminate the input process by typing CTRL+A:\n");

	
    while ((c=getchar())!=1) {

        fputc(c,pFile); //Characters read by getchar() function is put to the file in the pFile memeory location.

        if (c=='\n')
        {printf("\n");}      }
	

    while((c=getchar())==1); { //Termination condition. Ctrl+A

        fprintf(pFile,"\n");
        fprintf(pFile,"CTRL+A is a correct ending."); //fprintf writes the string argument to the file in the pFile memeory location.
			
							}

    fclose (pFile); // Close the opened file.

	return 0;
}

