//Test inheritance concepts.

#include <iostream>
#include "stdlib.h"
#include <ctime>

#include "Shape.h"
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"

using namespace std;
using namespace Shihan;
using namespace CAD;


int main ()
{   

	srand( time(0));					//The pseudo-random number generator is initialized using the argument passed.
	
	Shape* shapes[3];

	shapes[0] = new Shape;
	shapes[1] = new Point;
	shapes[2] = new Line;

	for(int i=0; i!=3; i++) delete shapes[i];

	//  When the destructor is NOT declared virtual in the base(Shape) class.
			// Destructor:Shape class

			// Destructor:Shape class

			// Destructor:Shape class


	// Derived class destructor will only be called  when the destructor is declared virtual in the base(Shape) class.
	// Below is the output.
			// Destructor:Shape class   (Destructor for shapes[0])

			// Destructor: Point Class  (Destructor for shapes[1] - derived class)
			//Destructor:Shape class	(Destructor for shapes[1] - base class)

			// Destructor: Line Class	(Destructor for shapes[2] - derived class)
			// Destructor: Point Class  (Point memeber1 associate with Line class  : Destructor - derived class )  (data member of shapes[2])
			// Destructor:Shape class   (Point memeber1 associate with Line class : Destructor - base class)

			//Destructor: Point Class   (Point memeber2 associate with Line class : Destructor - derived class )   (data member of shapes[2])
			//Destructor:Shape class    (Point memeber2 associate with Line class : Destructor - base class)

			//Destructor:Shape class	(Destructor for shapes[2] - base class)


	system("pause");
	return 0;
}