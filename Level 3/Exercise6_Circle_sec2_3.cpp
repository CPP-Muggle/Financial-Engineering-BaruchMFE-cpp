//  Implementation of functions in   Circle.hpp

#define _USE_MATH_DEFINES
#include "Circle.hpp"
#include <cmath>
#include <sstream>


Circle::Circle()		// Default constructor with center point at (0,0) and with radius zero. 
{
	Point centrePoint();
	m_radius = 0;
}


Circle::~Circle()		// Destructor
{
	
}


Circle::Circle(const Point& cp, const double& r)	//Overloaded constructor. Constructor with center point at values given 
													//by poit instance cp and radius r.

{
	centrePoint = cp;
	m_radius=r;
}


Circle::Circle(const Circle& C) // Copy constructor

{
	centrePoint=C.centrePoint;
	m_radius = C.m_radius;
}


Point Circle::CentrePoint() const  // Getter for start point

{
	return centrePoint;
}

double Circle::Radius() const   // Getter for end point

{
	return m_radius;
}


void Circle::CentrePoint(const Point& cp)	//Setter for start point

{
	centrePoint=cp;
}


void Circle::Radius(const double& r)

{
	m_radius=r;
}


double Circle::Diameter()					// Return the diameter of the circle.	

{  
	
	return 2*m_radius;
}


double Circle::Area()					// Return the area of the circle.

{
	return (M_PI*pow(m_radius,2));
}

double Circle::Circumference()

{
	return (2*M_PI*m_radius);
}



std::string Circle::ToString() 

{
	std::stringstream sm_x, sm_y, sm_r;	

	//sm_x << centrePoint.X();
	//sm_y << centrePoint.Y();

	sm_r<< m_radius;
	

	std::string str;
	str = "A circle with Radius "+sm_r.str()+" and  center at point " +centrePoint.ToString() ;

	return str;
}

