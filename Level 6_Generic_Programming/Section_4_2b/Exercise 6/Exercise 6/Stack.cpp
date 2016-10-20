#ifndef STACK_CPP
#define STACK_CPP

# include <iostream>
# include "ArrayException.h"
# include "OutOfBoundsException.h"
# include "Array.h"
# include "Stack.h"
# include "StackException.h"
# include "StackFullException.h"
# include "StackEmptyException.h"


namespace Shihan {
	namespace Containers {



template<typename T,int size>
Stack<T,size>::Stack()								   // Default Constructor
{	
	m_current = 0;
	stack_array = Array<T> (size);
	
	
}

/*template<typename T>
Stack<T>::Stack(int s_size)							// Consturctor with one argument
{		
		m_current = 0;
  	    stack_array = Array<T> (s_size);
		
}*/

template<typename T, int size>								// Copy Constructor
Stack<T,size>::Stack(const Stack<T,size>& source)
{   
   
    m_current = source.m_current;							
    stack_array = source.stack_array;				//Assignment operator in array class will take care of this operation.						
        
}

template<typename T,int size>
Stack<T,size>::~Stack()
{   
	
}								
   

//push a value onto the stack
template <typename T, int size>
void Stack<T,size>::push(const T& new_ele)
{

	
	 try
		{

	//(when m_current == -1 , Array throws the exception. To push values again indicator should go to 0 th position again.)
			if (m_current < 0) // if (m_current == -1)
				m_current = 0;

			stack_array[m_current] = new_ele;
			cout << stack_array[m_current] << " is pushed into the stack. \n" << endl;
			m_current = m_current +1;	

		}

	catch(ArrayException&)
		{   
			throw StackFullException(m_current);
		} 
	
	catch(...)
		{
			cout<<"An unhandled exception has occurred \n"<<endl;
		}
	
}
 

template <typename T, int size>
const T& Stack<T,size>::pop() 
{	
	
   
	try
		{
			m_current = m_current -1 ;
			cout << stack_array[m_current] << " is poped out from the stack. \n" << endl;
			return stack_array[m_current];
		}

	catch(ArrayException&)
		{  
			throw StackEmptyException(m_current);
			m_current = 0;
		}
	
	catch(...)
		{
			cout<<"An unhandled exception has occurred \n"<<endl;
		}
	
	
}
 
 template <typename T, int size>
Stack<T,size>& Stack<T,size>::operator=(const Stack<T,size>& source)
{
    
	//preclude self-assignment
    if (this==&source)                    
	{ return *this;  }

	m_size=source.m_current;
	stack_array =source.stack_array;
   
	return *this;
}





							}
					}
	
#endif // endif STACK_CPP