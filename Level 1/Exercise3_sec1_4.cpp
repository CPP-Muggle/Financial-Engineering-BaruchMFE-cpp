
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
int noletters = 0; //Number of letters
int nolines = 1;   //Number of lines
int nowords = 1;   //Number of words
int cnt =0;        //Number of characters
char curchr;
char prechr= '.';

printf("when you want to exist, please type CTRL+D end of current line\n ");
printf("---------------------------------------------------------------\n");
printf("Please, type a word or a sentence:\n");

curchr = getchar();

while (((curchr = getchar()) != EOF) && (curchr != 4))
{

cnt++;

switch(curchr)
{
    case '\n':
    { nolines++;
      if (!isspace(prechr))
      {nowords++;}
      break; }

    case ' ':
    {
      if (!isspace(prechr))
     { nowords++;}
      break; }

    case '\t':
    {
      if (!isspace(prechr))
     { nowords++;}
      break; }

    //default:
    //{ noletters++; break; }

 }
 prechr= curchr;
}

printf("------------------------------\n");
printf("Number of characters: %d\n",cnt);
//printf("Number of letters and digits: %d\n",noletters);
printf("Number of words: %d\n",nowords);
printf("Number of lines: %d\n",(nolines));
printf("------------------------------\n");


system("pause");
return 0;

}