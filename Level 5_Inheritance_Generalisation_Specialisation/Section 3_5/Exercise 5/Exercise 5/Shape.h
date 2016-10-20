// Shape.h
// Header file for the Shape Base classs. 


#ifndef Shape_H
#define Shape_H

#include <iostream>
#include <string>
#include "stdlib.h"
using namespace std;

namespace Shihan {
	namespace CAD	{


class Shape
{
	private:
		int  m_id;						// Data member for the id number
	
	public:
		Shape();						// Default Constructors
									
		Shape(const Shape& source);		// Copy constructor

		virtual ~Shape();						//Destructor

		int ID() const;					// Accessing the the x-coordinate value.
	
		virtual std::string ToString() const ;	//Returns ID as a string .

		Shape& operator = (const Shape& source);		//Assignment operator.
		
		virtual void Draw () const = 0;	// Pure virtual member function Draw().

		void Print() const ;
	
};

					}
				}

//std::ostream& operator << (ostream& os_P, const Shihan::CAD::Shape& sp);	// Global function to send a Shape directlry to the cout object.
#endif // Shape_H