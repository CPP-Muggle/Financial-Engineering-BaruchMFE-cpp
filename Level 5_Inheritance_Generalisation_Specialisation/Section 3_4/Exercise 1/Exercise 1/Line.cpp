//  Implementation of functions in   Line.hpp

#include "Line.hpp"
#include <cmath>
#include <sstream>

namespace Shihan {
	namespace CAD	{

// Line with both start and end Points at the origin
Line::Line()		

{
	cout << "Line: Default constructor\n" <<endl;
}

// Destructor
Line::~Line()		
{
	cout <<"Line: Destructor\n"<<endl;
}

//Overloaded constructor
Line::Line(const Point& p1, const Point& p2):startPoint(p1),endPoint(p2) 
{
	cout <<"Line: Constructor with two input arguments\n"<<endl;
}

// Copy constructor
Line::Line(const Line& l) :startPoint(l.startPoint),endPoint(l.endPoint) 
{    
	cout << "Line: copy constructor\n" <<endl;
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

//String description of the Line
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

//Length of a Line
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


	}
}

// Global function to send a line directlry to the cout object.
std::ostream& operator <<(ostream& os_L, const Shihan::CAD::Line& L)	
{

	os_L <<L.ToString();
	return os_L;
}