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

	//Initialize random number generator.
	srand( time(0));		  
	
	//Create Points
	Point p1(5,5);
	Point p2(10,10);

	//Check the print function
	p1.Print();
	cout <<""<<endl;

	//Check the print function
	p2.Print();
	cout <<""<<endl;
	
	//Create a line and check the print function.
	Line l(p1,p2);
	l.Print();
	cout <<""<<endl;

	//Create a Circle and check the print function.
	Circle c(p1,5);
	c.Print();

	
	system("pause");
	return 0;
}