#include <stdio.h>
#include <stdlib.h>


int minu_s(int a, int b);

int main()
{
      int x,y,z;
      printf("\n Enter integers x and y to subtract : ");
      scanf("%d %d",&x,&y);

      z=minu_s(x,y);
      printf("\n (x-y) = %d\n",z);

      system("pause");
}


 int minu_s(int a, int b)

          {  int c;  c=a-b;
             return(c);  }
