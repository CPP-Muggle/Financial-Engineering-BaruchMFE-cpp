// Point.hpp
// Header file for the Point classs with x- and y- coordinates. 


#ifndef Point_HPP
#define Point_HPP

#include <iostream>
#include <string>
#include "Shape.h"

using namespace std;

namespace Shihan {
	namespace CAD	{

class Point: public Shape
{
	private:
		double m_x;		// X coordinate
		double m_y;		// Y coordinate

	public:
	
		Point();								// Default constructor

		Point(double xval, double yval) ;		// Initialize with x and y value
	
		Point::Point(const Point& source);		// Copy constructor
	
		~Point();								//Destructor

	
	
		double X() const;						// Accessing the the x-coordinate value.
		void X(double newX);					// Assigning a value to to private variable m_x

		double Y() const;						// Accessing the the y-coordinate value.
		void Y(double newY);					// Assigning a value to to private variable m_y


		std::string ToString() const ;			//Returns the string description of the point.

		double Distance() const ;				//Calculate the distance to the origin (0,0).
		double Distance(const Point& p) const;	//Calculate the distance between two points.
	
		void Draw () const ;					// Draw fucntion. (PVMF in base class)

		// Adding Operators to the Point class.
		Point operator -  () const;					//Negate the coordinates.
		Point operator *  (double factor)  const;	//Scale the coordinates.
		Point operator +  (const Point& p) const;	//Add coordinates.
		bool  operator == (const Point& p) const;	//Equally compare operator.
		Point& operator = (const Point& source);	//Assignment operator.
		Point& operator *= (double factor);			//Scale the coordinates and assign
};

					}
				}

	std::ostream& operator << (ostream& os_P, const Shihan::CAD::Point& P);	// Global function to send a point directlry to the cout object.

#endif // Point_HXX