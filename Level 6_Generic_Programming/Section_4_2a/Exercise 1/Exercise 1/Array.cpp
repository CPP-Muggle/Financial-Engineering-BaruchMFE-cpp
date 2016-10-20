// Templated Array class implementation.

#ifndef ARRAY_CPP
#define ARRAY_CPP

# include <iostream>
# include "Array.h"
# include "ArrayException.h"
# include "OutOfBoundsException.h"


namespace Shihan {
	namespace Containers {

template<typename T>
Array<T>::Array()
{	
	// Default Constructor
    m_data = new T[10];
    m_size = 10;
}

template<typename T>
Array<T>::Array(int a_size)
{														
														// Consturctor with one argument
    m_data = new T[a_size];
    m_size = a_size;
}

template<typename T>
Array<T>::Array(const Array<T>& cp_arr)
{   // Copy Constructor
   
    m_size = cp_arr.m_size;							// Determine the size of cp_arr
	m_data = new T[m_size];							// Create an array by constructor 					
   
    for (int i = 0; i < m_size; i++)
	{ m_data[i] = cp_arr.m_data[i];	}		       // Assign each data by loop
    
}

template<typename T>
Array<T>::~Array()
{   delete [] m_data;	}								// Destructor.  Delete Array
    

 
template<typename T>
int Array<T>::Size() const								   // Return the array size
{	return m_size; }


template<typename T>
void Array<T>::SetElement(T* P, int index)	  // Set the elements in the array

{	
	if (index >= 0 && index < (m_size)  )
			m_data[index] = (*P) ;	
	else
		{
			throw OutOfBoundsException(index);       // throw OutOfBoundsException object
	    }

}

template<typename T>
T& Array<T>::GetElement(int index) const
{
    if (index > (m_size-1) || index < 0)
    {        
        throw OutOfBoundsException(index);         // throw OutOfBoundsException object
    }
 
    else
    {	return m_data[index];	}					// Otherwise, return the proper one

}
 

template<typename T>
Array<T>& Array<T>::operator=(const Array<T>& source)  //Assignment Operator.
{
    
	//preclude self-assignment
    if (this==&source)                    
		{ return *this;  }

	delete[]m_data;

    m_size=source.m_size;
    m_data=new T[m_size];

	for (int i=0;i<m_size;i++)
    {  m_data[i]=source.m_data[i];  }

	return *this;
}

template<typename T>
T& Array<T>::operator [] (int index)
{   
	if(index > (m_size-1) || index < 0)
	{   
		throw OutOfBoundsException(index);			// throw OutOfBoundsException object
	}
 
    return (*this).m_data[index];					// Otherwise, return the proper one

}


template<typename T>
const T& Array<T>::operator [] (int index) const 
{   
	cout << "Hello !!  Array::operator [] (int index) const is called " << endl;
	
	if(index > (m_size-1) || index < 0)
	{
		throw OutOfBoundsException(index);		// throw OutOfBoundsException object
	}
    

    return (*this).m_data[index];				// Otherwise, return the proper one

	
 }

							}
					}
	
#endif // endif ARRAY_CPP