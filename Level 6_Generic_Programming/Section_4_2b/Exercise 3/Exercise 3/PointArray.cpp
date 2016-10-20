// class PointArray implementation is here.

# include <iostream>
# include "Array.h"
# include "PointArray.h"

using namespace std;


namespace Shihan {
	namespace Containers {



PointArray::PointArray() : Array<Point> ()											//Default Constructor.
{

}


PointArray::PointArray(int a_size) : Array<Point> (a_size)							 //Constructor with one argument.
{

}



PointArray::PointArray(const PointArray& source):Array<Point>(source)			      // Copy Constructor.
{   
     
}

																	                  //Destructor.
PointArray::~PointArray()
{ 

}	



PointArray&  PointArray::operator=(const PointArray& source)						 // Assignement operators.
{
    cout <<"operator=(const PointArray& source) is called \n" << endl;
	//preclude self-assignment
    if (this==&source)                    
		{ return *this; }

	Array<Point>::operator =(source);

	return *this;
}



double PointArray::Length() const		
{	
	double tot_length = 0 ;

	if ((*this).Size() < 2)
    {
        cout << "Array must have more than two memebers to calculate the length. \n" << endl;
    }
   
    else
	{  
		for (int i = 0; i < (Size()-1); i++)
		tot_length += ((*this)[i]).Distance((*this)[i+1]);
	}	
	
    return tot_length;
}
 

 							}
					}
	
