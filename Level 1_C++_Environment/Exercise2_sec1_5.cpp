#include <stdio.h>
#include <stdlib.h>


int factorial(int a);

int main()
{
      int x,y;
      printf("\n Enter integer x to calculate the factorial : ");
      scanf("%d",&x);

      y=factorial(x);
      printf("\n (factorial of x) = %d\n",y);

      system("pause");
}


 int factorial(int a)

          {  int answer =1;
             int cnt;

          for (cnt =1; cnt<=a ; cnt++ )
          { answer *= cnt;}

          return (answer);

          }

