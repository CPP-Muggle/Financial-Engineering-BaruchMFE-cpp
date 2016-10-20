//Testing added operators to the Point class.

#include "Point.hpp"
//#include "Line.hpp"
//#include "Circle.hpp"
#include <iostream>
#include <stdlib.h>
using namespace std;


	
int main()

{	
	/*Point p(1.0,1.0);
	if(p==1.0) cout <<"Equal !"<<endl;
	else cout<<"Not equal"<<endl;*/

	// This code segment above  works when I don't declare Point constructor with the single double argument  as explicit. 
	//It outputs "Equal !".
	//The reason is Point constructor with the single double argument is implicitly used to convert the number in the if statement to a Point
	//object. I already developed operator== for point class. Hence if(p==1.0) return boolean 1 and 'cout <<"Equal !"<<endl' will be outputted. 
	// As soon as I change the single argument constructor to explicit (explicit Point(double xyval);) above code segment gives a compilation error.
	
	
	Point p(1.0,1.0);
	if(p==(Point)1.0) cout <<"Equal!"<<endl;
	else cout<<"Not equal"<<endl;
	
	// Here even with explicit declaration of the constructor (explicit Point (double xyval);), code gives "Eaual!" as an output.
	//Because in this case double value 1.0 in the if statement is casted to a Point object using (Point) command.

	
	system("pause");
	return 0;
}
