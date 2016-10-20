#include <stdio.h>
#include <stdlib.h>

int main()
{
float fah;
int cel;

  printf("Celsius \t Fahrenheit\n");
  for(cel = 0; cel <=19; cel = cel +1)
  {fah = ((9.0/5.0)* cel) + 32 ;
  printf("%d \t\t %0.1f\n", cel, fah);}

  system("pause");
  return 0;

}
