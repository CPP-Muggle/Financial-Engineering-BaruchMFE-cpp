#include <stdio.h>
#include <stdlib.h>

int main()
{
int married;
printf("Input an integer: (Zero=Unmarried : Non-Zero=Married )\n");
scanf("%d",&married);
printf("This person is :%s\n",(married==0)?"Unmarried":"Marrried");
printf("=======================================================\n");
system("pause");
return 0;
}
