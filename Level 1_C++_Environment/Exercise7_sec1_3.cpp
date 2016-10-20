#include <stdio.h>
#include <stdlib.h>

int main()
{

int p;
printf("Enter the number P you want to multiply:\n");
scanf_s("%d",&p);

int n;
printf("Enter the power n (2^n) you want to multiply:\n");
scanf_s("%d",&n);


int result;
result = p << n;
printf("Final answer: P*(2^n)= %d\n",result);
printf("================================================\n");

system("pause");
return 0;
}
