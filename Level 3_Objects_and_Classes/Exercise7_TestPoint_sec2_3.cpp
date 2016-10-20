// Test program to calculate distances from given points to origin and distances between two given points. 

#include "Point.hpp"
#include <iostream>
#include <stdlib.h>
using namespace std;

// NUMBER OF TIMES CONSTRUCTOR AND DESTRUCTOR ARE CALLED NOT EQUAL WHEN COPY CONSTRUCTOR IS NOT THERE. 
// FOR TWO INSTANCES CONSTRUCTOR IS CALLED TWICE WHILE DESTRUCTOR IS CALLED THREE TIMES.

//BUT WHEN THE COPY CONSTRUCTOR IS THERE  BOTH CONSTRUCTOR AND DESTRUCTOR ARE CALLED THREE TIMES EACH. (CONSTRUCTOR 2 TIMES + COPY CONSTRUCTOR 1 TIME)

	
int main()

{
	double x1,y1 ;
	cout << "Input two values for x  and y  coordinates (Point 1) :" <<endl;
	cin >> x1 >> y1;

	double x2,y2 ;
	cout << "Input two values for x  and y  coordinates (Point 2) :" <<endl;
	cin >> x2 >> y2;


	// Create the point 1 instance using default constructor
	Point p1(x1,y1);

	// Create the point 2 instance using default constructor 
	Point p2(x2,y2);

		
	// Print the point coordinates using the get functions
	cout << " This is the x  coordinate for point 1 :	" << p1.X() << endl;
	cout << " This is the y  coordinate for point 1 :	" << p1.Y() << endl;
	cout <<""<< endl;

	cout << " This is the x  coordinate for point 2 :	" << p2.X() << endl;
	cout << " This is the y  coordinate for point 2 :	" << p2.Y() << endl;
	cout <<""<< endl;
	
	// Print the description of the points returned by the ToString() function.
	cout <<" Description of Point 1 : " <<p1.ToString() << endl;
	cout <<" Description of Point 2 : " <<p2.ToString() << endl;
	cout <<""<< endl;


	// Calculate Distances.
	cout <<" Distance from Point 1 to origin : " <<p1.DistanceOrigin() << endl;
	cout <<" Distance from Point 2 to origin : " <<p2.DistanceOrigin() << endl;
	cout <<""<< endl;

	//Distance between two points.
	cout <<" Distance from Point 1 to Point 2 : "<<p1.Distance(p2);
	cout <<""<< endl;

	
	system("pause");
	return 0;
}
