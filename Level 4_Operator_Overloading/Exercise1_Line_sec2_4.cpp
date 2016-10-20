//  Implementation of functions in   Line.hpp

#include "Line.hpp"
#include <cmath>
#include <sstream>


Line::Line()		// Line with both start and end Points at the origin
{
	//Point startPoint();
	//Point endPoint();
}


Line::~Line()		// Destructor
{
	
}


Line::Line(const Point& p1, const Point& p2) //Overloaded constructor
{
	
	startPoint=p1;
	endPoint=p2;
}


Line::Line(const Line& l) // Copy constructor
{
	startPoint=l.startPoint;
	endPoint=l.endPoint;
}

Point Line::P1() const   // Getter for start point
{
	return startPoint;
}

Point Line::P2() const   // Getter for end point
{
	return endPoint;
}

void Line::P1(const Point& pt) //Setter for start point
{
	startPoint=pt;
}

void Line::P2(const Point& pt) // Setter for end point
{
	endPoint=pt;
}

std::string Line::ToString() const

{
	//std::stringstream sm_x1, sm_y1, sm_x2, sm_y2;	

	//sm_x1 << startPoint.X();
	//sm_y1 << startPoint.Y();

	//sm_x2 << endPoint.X();
	//sm_y2 << endPoint.Y();

	std::string str;
	//str = "Line between \"Point("+sm_x1.str()+","+sm_y1.str()+")\" and  \"Point("+sm_x2.str()+","+sm_y2.str()+")\" ";
	str = "Line between " + startPoint.ToString() + " and " + endPoint.ToString();

	return str;
}

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

	startPoint = source_line.startPoint;
	endPoint = source_line.endPoint;

	return *this;
}