#ifndef STACK_CPP
#define STACK_CPP

# include <iostream>
# include "Array.h"
# include "Stack.h"


namespace Shihan {
	namespace Containers {



template<typename T>
Stack<T>::Stack()								   // Default Constructor
{	
	m_current = 0;
	stack_array = Array<T> ();
	
	
}

template<typename T>
Stack<T>::Stack(int s_size)							// Consturctor with one argument
{		
		m_current = 0;
  	    stack_array = Array<T> (s_size);
		
}

template<typename T>								// Copy Constructor
Stack<T>::Stack(const Stack<T>& source)
{   
   
    m_current = source.m_current;							
    stack_array = source.stack_array;				//Assignment operator in array class will take care of this operation.						
        
}

template<typename T>
Stack<T>::~Stack()
{   
	
}								
   

//push a value onto the stack
template <typename T>
void Stack<T>::push(const T& new_ele)
{
	//(when m_current == -1 , Array throws the exception. To push values again indicator should go to 0 th position again.)
	if (m_current < 0) // if (m_current == -1)
		m_current = 0;

	stack_array[m_current] = new_ele;
	cout << stack_array[m_current] << " is pushed into the stack. \n" << endl;
	m_current = m_current +1;	
	
	
	
}
 

template <typename T>
const T& Stack<T>::pop() 
{	
   
	m_current = m_current -1 ;
    cout << stack_array[m_current] << " is poped out from the stack. \n" << endl;
	return stack_array[m_current];
	
}
 
 template<typename T>
Stack<T>& Stack<T>::operator=(const Stack<T>& source)
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