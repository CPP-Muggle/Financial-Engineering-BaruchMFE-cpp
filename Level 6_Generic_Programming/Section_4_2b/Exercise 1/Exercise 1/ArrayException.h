// I included class ArrayException inside namespaces Shihan and Containers.
// ArrayException class declaration and definitions are both here in this file.

#ifndef ARRAYEXCEPTION_H
#define ARRAYEXCEPTION_H

using namespace std;

namespace Shihan	{
	namespace Containers {

class ArrayException
 
{
  
public:
 
	ArrayException() {}							//Default Constructor
 
	virtual ~ArrayException() {}				//Default Destructor
 
	virtual std::string GetMessage() const = 0;  //GetMessage() is a PVMF and ArrayException is an abstract class.
	
};

						}
	                }
 
#endif