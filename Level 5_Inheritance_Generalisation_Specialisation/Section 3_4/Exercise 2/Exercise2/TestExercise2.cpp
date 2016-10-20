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
	Shape s;							//Create shape.
	Point p(10,20);						//Create point.
	Line l(Point(1,2),Point(3,4));		//Create line.

	cout<<s.ToString()<<'\n'<<endl;			//Print shape.
	cout<<p.ToString()<<'\n'<<endl;			//Print point.
	cout<<l.ToString()<<'\n'<<endl;			//print line.

	cout<<"Shape ID: "<<s.ID()<<'\n'<<endl;	//ID of the shape.
	cout<<"Point ID: "<<p.ID()<<'\n'<<endl;	//ID of the point. Does this work? This works since Point class is derived by Shape base class.
	cout<<"Line ID: "<<l.ID()<<'\n' <<endl;	//ID of the line. Does this work ? This works since Line class is derived by Shape base class.

	Shape* sp;							//Create a pointer to a shape variable.
	sp=&p;								//Point in a shape variable.  Possible ? This is possible because point is derived by Shape class.
	                                    // Point is also a shape instance with additonal data and funtions specific to Point instance.

	cout<<sp->ToString()<<'\n'<<endl;		//What is printed.  "ID of the Shape :19712 (This number should be same as p.ID())

	//Create and copy Point p to new point.
	Point p2;
	p2=p;

	cout <<p2<<","<<p2.ID()<<endl;		//Is the ID copied if you do not call the base class assignment in point ?
										//If I don't call the base class assignment in point class the ID will not be copied correctly.
										//"Point(10,20)",19712 (This number should be same as p.ID())


	system("pause");
	return 0;
}