// Shape.cpp
// Implementation of  the Shape Base class. 



#include <iostream>
#include <string>
#include <sstream>
#include "stdlib.h"
#include "Shape.h"

using namespace std;

namespace Shihan {
	namespace CAD	{


// Default constructor  //Colon syntax.
Shape:: Shape(): m_id(rand())		

{		
	
}

// Copy constructor
Shape::Shape(const Shape& source) : m_id(source.m_id)		
{
  	
}

// Destructor
Shape::~Shape()		

{
	cout<<"Shape Destructor" <<endl;
}

//ToString fucntion returns the id as a string
std::string Shape::ToString() const			

{   
	std::stringstream sm_id;	
	sm_id << m_id;
	std::string str;

	str = "ID of the Shape :"+sm_id.str() ;
	return str;
}

//Assignment operator copies the id member.
Shape& Shape::operator = (const Shape& source)		
{
	// Avoid doing assign to myself
	if (this == &source)
		return *this;

	m_id = source.m_id;

	return *this;
}

//Retrieve the ID of the Shape.
int Shape::ID() const			
{	
	return m_id;
}

//Print ToString() output
void Shape::Print() const
{ 
	cout << ToString() <<endl;

}

					}
				 }

	
