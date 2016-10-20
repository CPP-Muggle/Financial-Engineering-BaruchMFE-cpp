// SizeMissmatchException class header and definiton.

#ifndef SIZEMISSMATCHEXCEPTION_H
#define SIZEMISSMATCHEXCEPTION_H
 
#include <string>
#include <iostream>
#include "ArrayException.h"

using namespace std;

namespace Shihan	{
	namespace	Containers {

class SizeMissmatchException : public ArrayException

{

private:
    //No private data members.                   

public:
    
	SizeMissmatchException() {}											//Default cosntructor

	virtual ~SizeMissmatchException() {}									// Destructor
 
    std::string GetMessage() const 
	{
		std::string exstr;
		exstr = "Error:	Length of two arrays should be equal \n ";

		return exstr;

	}
};
 

					}

						} 

#endif // SIZEMISSMATCHEXCEPTION_H
