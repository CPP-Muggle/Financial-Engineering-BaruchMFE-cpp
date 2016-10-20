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
	
	//Destructor
	~Point();

	
	// Accessing functions
	double getX() const;					// Accessing the the x-coordinate value.
	void setX(double newX);			// Assigning a value to to private variable m_x

	double getY() const;					// Accessing the the y-coordinate value.
	void setY(double newY);					//Assigning a value to to private variable m_y


	std::string ToString() ;				//Returns the string description of the point.
	
};

#endif // Point_HXX