#include <stdio.h>
#include <stdlib.h>


void printnumber(int a)

    {  if (a < 0)
        {
        putchar('-');
        a = -a; }

        if(a/10)
        {printnumber(a/10);}

        putchar( '0' + a % 10 );
        putchar('\n');

    }

int main() {

    int i;
    printf("Enter any integer i you want:");
    scanf("%d",&i);
    printnumber(i);

    system("pause");

    return 0;
            }
