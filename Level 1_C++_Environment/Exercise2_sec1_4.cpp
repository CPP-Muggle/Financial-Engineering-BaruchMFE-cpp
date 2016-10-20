
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
int noletters = 0; //Number of characters
int nolines = 1;  //Number of lines
int nowords = 1; //Number of words
int cnt =0;     //Number of characters
char curchr;
char prechr= '.';

printf("when you want to exist, please type CTRL+D end of current line\n ");
printf("--------------------------------------------------------------\n");
printf("Please, type a word or a sentence:\n");

curchr = getchar();
do { 
	cnt++;

    // if ((curchr != ' ') && (curchr != '\n')&& (curchr != 4))
    //{ noletters++; };

     if ((curchr != ' ')&& (isspace(prechr))&& (curchr != 4))
    { nowords++;};

     if (curchr=='\n')
    { nolines++;};

     prechr= curchr;

    }

while (((curchr=getchar() ) != EOF) && (curchr != 4));

printf("------------------------------\n");
printf("Number of characters: %d\n",cnt);
printf("Number of words: %d\n",nowords);
printf("Number of lines: %d\n",(nolines));
printf("------------------------------\n");

system("pasuse");
return 0;
}
