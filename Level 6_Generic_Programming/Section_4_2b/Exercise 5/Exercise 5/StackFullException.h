// StackFullException header file and implementation.

#ifndef StackFullException_H
#define StackFullException_H
 
#include <string>
#include <iostream>
//#include <sstream>
//#include <ostream>
//#include "ArrayException.h"
#include "StackException.h"

using namespace std;

namespace Shihan	{
	namespace	Containers {

class StackFullException : public StackException

{

private:
    int m_index;                    // Private data member to store erroneous array index.   

public:
    
	StackFullException() {}											//Default cosntructor

	StackFullException(int bad_index):m_index(bad_index) {}			//Cosntructor with one input.
		 
	virtual ~StackFullException() {}									// Destructor
 
    std::string GetMessage() const 
	{
		   
		std::stringstream OBS;
		OBS << m_index;

		std::string exstr;
		exstr = "Stack is full ! index : "+ OBS.str() +" is not in the legal range. Can't push anymore elements !!! \n";

		return exstr;

	}
};
 

 
					}

						} 

#endif // StackFullException_HPP
