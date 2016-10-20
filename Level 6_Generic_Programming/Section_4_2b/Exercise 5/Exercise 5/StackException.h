// StackException header file and implementation.
#ifndef STACKEXCEPTION_H
#define STACKEXCEPTION_H

using namespace std;

namespace Shihan	{
	namespace Containers {

class StackException
 
{
  
public:
 
	StackException() {}							//Default Constructor
 
	~StackException() {}				        //Default Destructor
 
	virtual std::string GetMessage() const = 0;  //GetMessage() is a PVMF and ArrayException is an abstract class.
	
};

						}
	                }
 
#endif