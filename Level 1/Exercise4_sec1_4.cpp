#include <stdio.h>

int main()
{

float  fah, cel;
float minF, maxF, stepsize;

printf("For this exercise: Enter the following values.\nMinimum Fahrenheit value: 0\nMaximum Fahrenheit value:300\nStepsize:20\n");
printf("------------------------------------\n");
printf("Enter the minimum Fahrenheit value: ");
scanf("%f",&minF); // Minimum Fahrenheit value
//minF=0;

printf("Enter the maximum Fahrenheit value: ");
scanf("%f",&maxF);// Maximum Fahrenheit value
//maxF=300;

printf("Enter the stepsize: ");
scanf("%f",&stepsize); //stepsize
//stepsize=20;


printf("Fahrenheit \t Celcius\n");
fah = minF;

while (fah <= maxF)

    { cel = (5.0)*(fah-32)/9.0;
      printf("%.1f \t\t%10.1f\n", fah, cel);
      fah = fah + stepsize; }

}
