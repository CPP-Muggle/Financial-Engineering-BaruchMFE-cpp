// I included class ArrayException inside namespaces Shihan and Containers.
// ArrayException class declaration and definitions are both here in this file.

#ifndef OutOfBoundsException_H
#define OutOfBoundsException_H
 
#include <string>
#include <iostream>
#include <sstream>
#include <ostream>
#include "ArrayException.h"

using namespace std;

namespace Shihan	{
	namespace	Containers {

class OutOfBoundsException : public ArrayException

{

private:
    int m_index;                    // Private data member to store erroneous array index.   

public:
    
	OutOfBoundsException() {}											//Default cosntructor

	OutOfBoundsException(int bad_index):m_index(bad_index) {}			//Cosntructor with one input.
		 
	virtual ~OutOfBoundsException() {}									// Destructor
 
    std::string GetMessage() const 
	{
		   
		std::stringstream OBS;
		OBS << m_index;

		std::string exstr;
		exstr = "Out of bounds! index: "+ OBS.str() +" is not in the legal range \n";

		return exstr;

	}
};
 

 
 
/*inline string GetMessage() 
{
    std::stringstream OBS;
	OBS << m_index;

	std::string exstr;
	exstr = "Out of bounds! index: "+ OBS.str();

	return exstr;
    
}*/

					}

						} 

#endif // OutOfBoundsException_HPP

