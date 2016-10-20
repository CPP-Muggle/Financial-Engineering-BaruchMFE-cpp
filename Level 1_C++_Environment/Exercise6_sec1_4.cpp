#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
char c;
int no_of_0=0;//Number of "0"
int no_of_1=0;//Number of "1"
int no_of_2=0;//Number of "2"
int no_of_3=0;//Number of "3"
int no_of_4=0;//Number of "4"
int no_of_other=0; //Number of other characters

printf("The input will be halted with CTRL+D\n");
printf("\nEnter any amount of integers you want:\n");


c=getchar();

while(c!=EOF && c!=26 && c!=4)
{
    switch(c)
    {
    case '0': no_of_0++;break;
    case '1': no_of_1++;break;
    case '2': no_of_2++;break;
    case '3': no_of_3++;break;
    case '4': no_of_4++;break;
    default : no_of_other++;break;
    }
    c=getchar();
}

printf("\n");
printf("Number 0 appears %d times\n", no_of_0);
printf("Number 1 appears %d times\n", no_of_1);
printf("Number 2 appears %d times\n", no_of_2);
printf("Number 3 appears %d times\n", no_of_3);
printf("Number 4 appears %d times\n", no_of_4);
printf("Number of other characters appear %d times\n", no_of_other);

system ("pause");
return 0;
}