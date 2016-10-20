//  Implementation of functions in   Line.hpp

#include "Line.hpp"
#include <cmath>
#include <sstream>

namespace Shihan {
	namespace CAD	{

// Line with both start and end Points at the origin
Line::Line():Shape()		
{
	
}

// Destructor
Line::~Line()		
{
	
}

//Overloaded constructor
Line::Line(const Point& p1, const Point& p2):Shape(),startPoint(p1),endPoint(p2) 
{

}

//Copy constructor
Line::Line(const Line& l) :Shape(l),startPoint(l.startPoint),endPoint(l.endPoint) 
{    
	
}

// Getter for start point
Point Line::P1() const   
{
	return startPoint;
}

// Getter for end point
Point Line::P2() const   
{
	return endPoint;
}

//Setter for start point
void Line::P1(const Point& pt) 
{
	startPoint=pt;
}

// Setter for end point
void Line::P2(const Point& pt) 
{
	endPoint=pt;
}

//String description of the line
std::string Line::ToString() const

{
	std::string str;
	str = "Line between " + startPoint.ToString() + " and " + endPoint.ToString();

	std::string s=Shape::ToString();
	return str+" [ "+ s + " ]";
	//return str;
}

//Length of the line (Distance between two points)
double Line::Length() const
{ 
	return startPoint.Distance(endPoint);
}

//Assignment operator
Line& Line::operator = (const Line& source_line)		
{
	// Avoid doing assign to myself
	if (this == &source_line)
		return *this;

	Shape::operator =(source_line);
	startPoint = source_line.startPoint;
	endPoint = source_line.endPoint;

	return *this;
}

					}
				 }

// Global function to send a line directlry to the cout object.
std::ostream& operator <<(ostream& os_L, const Shihan::CAD::Line& L)	
{
	os_L <<L.ToString();
	return os_L;
}