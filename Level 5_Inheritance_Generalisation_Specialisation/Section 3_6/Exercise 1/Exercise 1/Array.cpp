# include "Point.hpp"
# include "Array.h"

using namespace std;

namespace Shihan {
  namespace Containers {

Array::Array()
{	
	// Default Constructor
    m_data = new CAD::Point[10];
    m_size = 10;
}
 
Array::Array(int a_size)
{   
	// Consturctor with one argument
    m_data = new CAD::Point[a_size];
    m_size = a_size;
}
 
Array::Array(const Array& cp_arr)
{   // Copy Constructor
   
    m_size = cp_arr.m_size;					       // Determine the size of cp_arr
	m_data = new CAD::Point[m_size];				       // Create an array by constructor 					
   
    for (int i = 0; i < m_size; i++)
	{ m_data[i] = cp_arr.m_data[i];	}		       // Assign each data by loop
    
}
 
Array::~Array()
{   delete [] m_data;	}					      // Destructor.  Delete Array
    

 

int Array::Size() const						      // Return the array size
{	return m_size; }

void Array::SetElement(CAD::Point* P, int index)		 // Set the elements in the array

{	
	if (index >= 0 && index < (m_size)  )
		m_data[index] = (*P) ;
	else
		throw -1;

}


CAD::Point& Array::GetElement(int index) const
{
    if (index > (m_size-1) || index < 0)
    {    
		throw -1;
    }
 
    else
    {	
		return m_data[index];	// Otherwise, return the proper one
	}					

}
 


Array& Array::operator=(const Array& source)
{
    cout<<"Assignment operator for array class is called!"<<endl;

	//preclude self-assignment
    if (this==&source)                    
		{ return *this;  }

	delete[]m_data;

    m_size=source.m_size;
    m_data=new CAD::Point[m_size];

	for (int i=0;i<m_size;i++)
    {  m_data[i]=source.m_data[i];  }

	return *this;
}

CAD::Point& Array::operator [] (int index)
{   
	if(index > (m_size-1) || index < 0)
	{  
		throw -1;
	}
 
    return (*this).m_data[index];

}

const CAD::Point& Array::operator [] (int index) const 
{   
	cout << " Hello !! Array::operator [] (int index) const is called." <<endl;
	if(index > (m_size-1) || index < 0)

	{   
		throw -1;
	}
    
    return (*this).m_data[index];
	
 }
					}
				 }