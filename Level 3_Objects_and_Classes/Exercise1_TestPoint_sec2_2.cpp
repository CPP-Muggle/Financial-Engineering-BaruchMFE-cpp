// Test program for the header file.

#include "Point.hpp"
#include <iostream>
#include <stdlib.h>
using namespace std;



	
int main()

{
	double x,y ;
	cout << "Input two values for x - and y - coordinates :" <<endl;
	cin >> x >> y;


	// Create a point instance using default constructor
	Point p1;

	// Set the user entered coordinates using setter functions. check setter functions.
	p1.setX(x);
	p1.setY(y);
	
	// Print the description of the point returned by the ToString() function.
	cout <<" Output from the ToString() : " <<p1.ToString() << endl;
	
	// Print the point coordinates using the get functions
	cout << " This is the x - coordinate	" << p1.getX() << endl;
	cout << " This is the y - coordinate	" << p1.getY() << endl;


	system("pause");
	return 0;
}
