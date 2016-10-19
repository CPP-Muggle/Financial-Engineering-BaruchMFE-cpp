// Point.cpp
// Function implementation for the functions in the header file Point.hpp(Point classs with x- and y- coordinates.) 


#include "Point.hpp"
#include <cmath>
#include <sstream>

// Default constructor 
Point::Point() : m_x(0), m_y(0) // Colon syntax.

{	//  If Colon syntax is not used following code block will be used.
	
	//	x = y =0.0;
}


// Initialize using newx and newy
Point::Point(double newx, double newy) :m_x(newx),m_y(newy)

{	//  If Colon syntax is not used following code block will be used.
	
	/*x = newx;
	y = newy;*/
}


// Destructor
Point::~Point()

{	
		cout << "Bye my point instance ..\n";
}

// Getter function for coordinate x.
double Point::getX() const

{
	return m_x;
}

//Setter function for coordinate x.
void Point::setX(double newX) 

{ 
	m_x = newX;
}


// Getter function for coordinate y.
double Point::getY() const 

{
	return m_y;
}

//Setter function for coordinate y.
void Point::setY(double newY)

{ 
	m_y = newY;
}

// Returns a string description of the point.
std::string Point::ToString() 

{
		std::stringstream sm_x, sm_y;	

		sm_x << m_x;
		sm_y << m_y;

		std::string str;
		str = "\"Point("+sm_x.str()+","+sm_y.str()+")\"";

		return str;
}