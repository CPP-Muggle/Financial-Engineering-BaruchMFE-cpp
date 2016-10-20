// Line.hpp

// A line in 2 dimensions. This class represents an undirected
// line segment between two given points.


#ifndef Line_HPP
#define Line_HPP

#include "Point.hpp"
#include <iostream>
#include <string>

using namespace std;

namespace Shihan {
	namespace CAD	{


class Line: public Shape

{

private:
		
	Point startPoint;	// Start point of the line
	Point endPoint;		// End point of the line

public:

	// Constructors
	Line();									// Line with both start and end Points at the origin
	Line(const Point& p1, const Point& p2);	// Line with start and end Points [p1, p2]
	Line(const Line& l); 					// Copy constructor
	~Line();								// Destructor


	// Accesssing functions
	Point P1() const  ;							
	Point P2() const  ;								


	// Modifiers
	void P1(const Point& pt);						// Set Point pt1
	void P2(const Point& pt);						// Set Point pt2


	std::string ToString() const ;						//Returns the string description of the Line.
	double Length() const ;								// Returns the Length of the Line

	void Draw () const;								// Draw fucntion. (PVMF in base class)

	Line& operator = (const Line& source);			//Assignment operator.
	
};

					}
				}

std::ostream& operator << (ostream& os_L, const Shihan::CAD::Line& L);	// Global function to send a line directlry to the cout object.

#endif




