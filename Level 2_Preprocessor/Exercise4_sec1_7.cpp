// DayName function can print the day of a given day number.
// Ex1; 1 gives: Day 1 is a Sunday.  ,  Ex2; 7 gives: Day 7 is a Saturday.

#include <stdio.h>
#include <stdlib.h>



void DayName(int i); // Function declaration for DayName.

int main (){

int x;

printf("Enter any number in the set [1 - 7]:"); //Requesting user input
scanf("%d",&x);	 // Scanning user inputted value
DayName(x);		// Call to the DayName function.

system("pause");
return 0 ;

}


// DayName fucntion implementation
void DayName(int i) 
{

char  *Day[8]={"Invalid","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
printf("Day %d is a %s .\n",i,Day[i]);
}