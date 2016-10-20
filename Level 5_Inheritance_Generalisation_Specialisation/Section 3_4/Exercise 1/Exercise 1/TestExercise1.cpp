//Testing added operators to the Point class.

#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include <iostream>
#include <stdlib.h>
using namespace std;

using namespace Shihan;
using namespace CAD;

	
int main()

{	

	//Line l; 

	// According to my implementation I don't have any assignment or setter callings inside my 
	// default line class. Hence with colon syntax or without colon syntax I got two calls for default Point constructor
	// and one call for default line constructor.


	/////////////////////////////////////////////////////////////////////////////////////////////////

	// Things get more interesting when I call Line l2(p1,p2) constructor.

	Point p1(5,5);
	Point p2(10,10);
	Line l2(p1,p2);

	//Without colon syntax :
		  // Point constructor [2 input arguments]	-  Two times
		  // Default Point constructor	-	Two times  (For two private members of the Line)
		  // Line constructor [2 input argument]	-	One time
		  // Assignment operator for the Point class	-	Two times


	// With colon syntax :
		// Point constructor [2 input arguments]	-  Two times
		// Copy constructor for the point class		-  Two times (For two private members of the Line)
		// Line constructor [2 input argument]	-	One time


	// It is very clear that colon syntax  makes your code more efficient by reducing the 
	// number of assignemt operator calls in the above example.

	//When you initialize via member initializer list (colon syntax) the constructors will be called  
	//and the object will be constructed and initialized in one operation.

	//If you use assignment then the members will be first initialized with constructors and then reassigned 
	//via assignment operators. There will be an additional overhead.

	system("pause");
	return 0;
	
}
