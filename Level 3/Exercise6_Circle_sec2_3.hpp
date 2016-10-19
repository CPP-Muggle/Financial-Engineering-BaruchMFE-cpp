// Line.hpp

// A line in 2 dimensions. This class represents an undirected
// line segment between two given points.


#ifndef Circle_HPP
#define Circle_HPP

#include "Point.hpp"
#include <iostream>

using namespace std;

class Circle

{

private:
	Point centrePoint;	    // ceterPoint of the circle
	double m_radius;		// Radius of the circle

public:

	// Constructors
	Circle();								    // Default constructor with center point at (0,0) and radius is zero. 
	Circle(const Point& cp, const double& r);	// Constructor with center point at values given by poit instance cp and radius r.
	Circle(const Circle& C); 					// Copy constructor
	~Circle();								    // Destructor


							


	// Getter Functions
	Point CentrePoint() const;
	double Radius() const;

	//Setter functions
	void CentrePoint(const Point& cp);	
	void Radius(const double& r);

	
	
	double Diameter();					// Return the diameter of the circle.	
	double Area();						// Return the area of the circle.
	double Circumference();


	std::string ToString() ;						//Returns the string description of the the circle.
	


};

#endif




