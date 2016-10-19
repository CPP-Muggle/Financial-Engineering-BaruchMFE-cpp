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
	void X(double newX);					// Assigning a value to to private variable m_x

	double Y() const;					// Accessing the the y-coordinate value.
	void Y(double newY);					//Assigning a value to to private variable m_y


	std::string ToString() ;				//Returns the string description of the point.

	double Distance();				         //Calculate the distance to the origin (0,0).
	double Distance(const Point& p);		//Calculate the distance between two points.
	
};

#endif // Point_HXX