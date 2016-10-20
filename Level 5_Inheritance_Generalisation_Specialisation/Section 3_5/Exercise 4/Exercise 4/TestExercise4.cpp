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

	srand( time(0));		   //The pseudo-random number generator is initialized using the argument passed.
	
	Shape* shapes[3];          // Still I can create the Shape pointers though Shape is an abstract base class.

	//shapes[0] = new Shape;   //I can't   create instances of the Shape class. It is an abstract base class now.
	shapes[0] = new Line;
	shapes[1] = new Point;
	shapes[2] = new Circle;


	for(int i=0; i!=3;i++) shapes[i] -> Draw(); // Checking Draw() of concrete shapes like Line, Point and Circle.
	cout <<""<<endl;
	for(int i=0; i!=3; i++) delete shapes[i];

	

	system("pause");
	return 0;
}