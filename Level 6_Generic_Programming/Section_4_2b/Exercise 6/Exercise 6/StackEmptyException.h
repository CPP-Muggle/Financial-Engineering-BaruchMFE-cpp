
#ifndef StackEmptyException_H
#define StackEmptyException_H
 
#include <string>
#include <iostream>
#include <ostream>
//#include "ArrayException.h"

#include "StackException.h"

using namespace std;

namespace Shihan	{
	namespace	Containers {

class StackEmptyException : public StackException

{

private:
    int m_index;                    // Private data member to store erroneous array index.   

public:
    
	StackEmptyException() {}											//Default cosntructor

	StackEmptyException(int bad_index):m_index(bad_index) {}			//Cosntructor with one input.
		 
	virtual ~StackEmptyException() {}									// Destructor
 
    std::string GetMessage() const 
	{
		   
		std::stringstream OBS;
		OBS << m_index;

		std::string exstr;
		exstr = "Stack is Empty ! index: "+ OBS.str() +" is not in the legal range. Can't pop anymore elements !!! \n";

		return exstr;

	}
};
 

 
 
			}

						} 

#endif // StackFullException_HPP