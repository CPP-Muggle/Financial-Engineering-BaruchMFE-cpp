//  Implementation of functions in   Circle.hpp

#define _USE_MATH_DEFINES
#include "Circle.hpp"
#include <cmath>
#include <sstream>

namespace Shihan {
	namespace CAD	{

// Default constructor with center point at (0,0) and with radius zero. 
Circle::Circle():Shape(), centrePoint (),m_radius(0)		
{

}

// Destructor
Circle::~Circle()		
{
	cout << "Destructor: Circle Class" <<endl;
}

//Overloaded constructor. Constructor with center point at values given by poit instance cp and radius r.
Circle::Circle(const Point& cp, const double& r):Shape(), centrePoint (cp),m_radius(r)		
{
	
}

// Copy constructor
Circle::Circle(const Circle& C):Shape(C),centrePoint (C.centrePoint),m_radius(C.m_radius)	 
{
	
}

// Getter for start point
Point Circle::CentrePoint() const  
{
	return centrePoint;
}

// Getter for end point
double Circle::Radius() const   

{
	return m_radius;
}

//Setter for start point
void Circle::CentrePoint(const Point& cp)	

{
	centrePoint=cp;
}

//Setter for radius.
void Circle::Radius(const double& r)	

{
	m_radius=r;
}

// Return the diameter of the circle.	
double Circle::Diameter() const			

{  
	return 2*m_radius;
}

// Return the area of the circle.
double Circle::Area() const				

{
	return (M_PI*pow(m_radius,2));
}

//Return the circumference of the circle.
double Circle::Circumference() const	

{
	return (2*M_PI*m_radius);
}

//String description of the circle.
std::string Circle::ToString() const	

{
	std::stringstream sm_r;	
	sm_r<< m_radius;
	
	std::string str;
	str = "\nA circle with Radius "+sm_r.str()+" and  center at point " +centrePoint.ToString() ;

	std::string s=Shape::ToString();
	return str+" { "+ s + " }";
	
}


//Implementation of Draw(). (PVMF in base class)
void Circle::Draw() const
{
	cout << "Draw a Circle" << endl;
}


//Assignment operator
Circle& Circle::operator = (const Circle& source_circle)
{
	// Avoid doing assign to myself
	if (this == &source_circle)
		return *this;

	Shape::operator =(source_circle);
	centrePoint = source_circle.centrePoint;
	m_radius = source_circle.m_radius;

	return *this;
}

					}
				}

// Global function to send a circle directlry to the cout object.
std::ostream& operator <<(ostream& os_C, const Shihan::CAD::Circle& C)	
{

	os_C <<C.ToString();
	return os_C;
}