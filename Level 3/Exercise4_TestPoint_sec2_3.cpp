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
	const Point cp(1.5,3.9);
	// cp.X(0.3);		//Setter function is not defined as a const . Therefore this gives a compiler error. 
	cout<<cp.X()<<endl; // This gives a compiler error when getter function is not marked as a const. Since it is marked as a const function
	                    // now it works fine.

	double x2,y2 ;
	cout << "Input two values for x  and y  coordinates (Point 2) :" <<endl;
	cin >> x2 >> y2;


	// Create the point 2 instance using default constructor 
	Point p2(x2,y2);

		
	// Print the point coordinates using the get functions
	cout << " This is the x  coordinate for point 1 :	" << cp.X() << endl;	// Getter functions are defined as const.
	cout << " This is the y  coordinate for point 1 :	" << cp.Y() << endl;
	cout <<""<< endl;

	cout << " This is the x  coordinate for point 2 :	" << p2.X() << endl;	
	cout << " This is the y  coordinate for point 2 :	" << p2.Y() << endl;
	cout <<""<< endl;
	
	// Print the description of the points returned by the ToString() function.
	cout <<" Description of Point 1 : " <<cp.ToString() << endl;		//ToString()  function is defined as const.
	cout <<" Description of Point 2 : " <<p2.ToString() << endl;
	cout <<""<< endl;


	// Calculate Distances.
	cout <<" Distance from Point 1 to origin : " <<cp.Distance() << endl;	//Distance() function to calculate the distance to origin is defined as cosnt.
	cout <<" Distance from Point 2 to origin : " <<p2.Distance() << endl;
	cout <<""<< endl;

	//Distance between two points.
	cout <<" Distance from Point 1 to Point 2 : "<<cp.Distance(p2) <<endl; //Distance() function to calculate the distance between two points is defined as cosnt.
	cout <<""<< endl;

	
	system("pause");
	return 0;
}
