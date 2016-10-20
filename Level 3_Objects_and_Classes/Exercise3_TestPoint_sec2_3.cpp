// Test program to calculate distances from given points to origin and distances between two given points. 
// Function Overloading concept is applied  here.

#include "Point.hpp"
#include <iostream>
#include <stdlib.h>
using namespace std;

// DistanceOrigin() function is changed to Distance().
// SetX() and GetX() functions to just X(). SetY() and GetY() functions to Y().
	
int main()

{
	double x1,y1 ;
	cout << "Input two values for x  and y  coordinates (Point 1) :" <<endl;
	cin >> x1 >> y1;

	double x2,y2 ;
	cout << "Input two values for x  and y  coordinates (Point 2) :" <<endl;
	cin >> x2 >> y2;


	// Create the point 1 instance using the constructor
	Point p1(x1,y1);

	// Create the point 2 instance using default constructor 
	Point p2;

	//Setting values for p2 using setter functions.
	p2.X(x2);
	p2.Y(y2);



		
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
	cout <<" Distance from Point 1 to origin : " <<p1.Distance() << endl;
	cout <<" Distance from Point 2 to origin : " <<p2.Distance() << endl;
	cout <<""<< endl;

	//Distance between two points.
	cout <<" Distance from Point 1 to Point 2 : "<<p1.Distance(p2) <<endl;
	cout <<""<< endl;

	
	system("pause");
	return 0;
}
