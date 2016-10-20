// Definition for class NumericArray.

#ifndef NUMERICARRAY_CPP
#define NUMERICARRAY_CPP

# include <iostream>
# include "Array.h"
# include "ArrayException.h"
# include "SizeMissmatchException.h"
# include "NumericArray.h"

using namespace std;


namespace Shihan {
	namespace Containers {

/*****************************************************************************************/
template<typename T>
NumericArray<T>::NumericArray() : Array<T> ()											//Default Constructor.
{

}

template<typename T>
NumericArray<T>::NumericArray(int a_size) : Array<T> (a_size)							//Constructor with one argument.
{

}


template<typename T>
NumericArray<T>::NumericArray(const NumericArray<T>& source):Array<T>(source)			// Copy Constructor.
{   
     
}

template<typename T>																	//Destructor.
NumericArray<T>::~NumericArray()
{ 

}	

/********************************************************************************************/

template <typename T> 
T NumericArray<T>::DotProduct (const NumericArray<T>& source) const							// Dot porduct fucntion.	
{
    if (Size() != source.Size())		
	{	throw SizeMissmatchException();	}

    T sum = 0;
    for (int i = 0; i < (Size()); i++)
    {
        sum += source[i]* (*this)[i]  ;
    }
    return sum;
}

/******************************************************************************************/

template<typename T>
NumericArray<T>&  NumericArray<T>::operator=(const NumericArray<T>& source)				// Assignement operators.
{
    cout <<"operator=(const NumericArray<T>& source) is called \n" << endl;
	//preclude self-assignment
    if (this==&source)                    
		{ return *this; }

	Array<T>::operator =(source);

	return *this;
}


/*****************************************************************************************/
template<typename T>
NumericArray<T> NumericArray<T>::operator * (T factor)   const							//Scale by factor T
{   
	cout << "operator * (T factor) const is called \n " <<endl ;
    NumericArray<T> temp(Size());
    for (int i = 0; i < Size(); i++)
    {
        temp[i] = factor * (*this)[i];
	}
    return temp;
}
/*****************************************************************************************/ 

template <class T>
NumericArray<T> NumericArray<T>::operator + (const NumericArray<T>& source) const		
{	
	cout << "operator + (const NumericArray<T>& source) const is called \n " <<endl ;
	if (Size() != source.Size())		
	{	throw SizeMissmatchException();	}

    NumericArray<T> temp(Size());
    for (int i = 0; i < Size(); i++)
    {
        temp[i] = source[i] + (*this)[i];
    }
    return temp;
}
 
/*****************************************************************************************/
 							}
					}
	
#endif // endif NUMERICARRAY_CPP