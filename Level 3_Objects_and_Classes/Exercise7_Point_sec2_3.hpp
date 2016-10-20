// Point.hpp
// Header file for the Point classs with x- and y- coordinates. 

#ifndef Point_HPP
#define Point_HPP

#include <iostream>
#include <string>
using namespace std;



class Point
{
	private:
	double m_x;		// X coordinate
	double m_y;		// Y coordinate

	public:
	// Constructors
	Point();								// Default constructor
	Point(double xval, double yval);		// Initialize with x and y value
	
	// Copy constructor
	Point::Point(const Point& source);

	//Destructor
	~Point();

	
	// Accessing functions
	double X() const;					// Accessing the the x-coordinate value.
	void   X(double newX){m_x = newX;}					// Default inline function for x-setter
	
	double Y() const;					// Accessing the the y-coordinate value.
	void   Y(double newY) {m_y = newY;}					// Default inline function for y-setter
	
	std::string ToString() ;				//Returns the string description of the point.

	double DistanceOrigin();				//Calculate the distance to the origin (0,0).
	double Distance(Point p);				//Calculate the distance between two points.
	
};




// Normal inline getter function for coordinate x.
inline double Point::X() const

{
	return m_x;
}

// Normal inline getter function for coordinate y.
inline double Point::Y() const 

{
	return m_y;
}

#endif // Point_HXX