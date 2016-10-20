#include <stdio.h>
#include <stdlib.h>

int main()
{
int i=10;
printf("Value of i: %d\n",i);
printf("====================\n");

int j= --i;
printf("Value of --i: %d\n",j);
printf("====================\n");

printf("New value of i: %d\n",i);
printf("====================\n");

int k=i--;
printf("Value of i--: %d\n",k);
printf("====================\n");

printf("New value of i: %d\n",i);
printf("====================\n");

system("pause");
return 0;
}
