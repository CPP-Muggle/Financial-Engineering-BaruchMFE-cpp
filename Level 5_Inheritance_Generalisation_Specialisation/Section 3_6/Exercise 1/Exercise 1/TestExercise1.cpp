#include <iostream>
#include "Point.hpp"
# include "Array.h"

using namespace std;
using namespace Shihan;
using namespace CAD;
using namespace Containers;


int main()
{
  //*************************************************************************************************/
	//Checking GetElement() Exception
	try {

	Array default_arr(10);								  // Default array
	for (int j=0; j<10; j++)
	{   
		default_arr.SetElement(&Point(),j);				  // Test SetElement()
		cout << default_arr.GetElement(j+1)<<endl;		  // j+i is a non-existent element.
	}    

	   }

	catch(int err)
    {
        if(err== (-1))
            cout<<"Trying to access out of range element.(The index was too small or too big)\n" << endl;
    }
    catch(...)
    {
        cout<<"An unhandled exception has occurred"<<endl;
    }
  /***************************************************************************************************/

	//Checking SetElement() Exception
	try {

	Array default_arr(10);								  // Default array
	for (int j=0; j<10; j++)

	{   
		default_arr.SetElement(&Point(),j+1);				  // Trying to set out of range index (j+1)
	}    

	   }

	catch(int err)
    {
        if(err== (-1))
            cout<<"Trying to set out of range element.(The index was too small or too big)\n" << endl;
    }
    catch(...)
    {
        cout<<"An unhandled exception has occurred"<<endl;
    }

	/****************************************************************************************************/

	try {

	Array default_arr(10);								  // Default array.
	cout << default_arr[10] << endl;                      // Index out of bounds.

	}
	catch(int err)
    {
        if(err== (-1))
            cout<<"Index out of bounds.(The index was too small or too big)\n" << endl;
    }
    catch(...)
    {
        cout<<"An unhandled exception has occurred"<<endl;
    }

  /****************************************************************************************************/
	//  Checking Array::operator [] (int index) const 

	try {
			const  Array test_arr_const(1);
	        cout << test_arr_const[2] << endl;	
		}
	catch(int err)
    {
        if(err== (-1))
            cout<<"Index out of bounds.(The index was too small or too big)\n" << endl;
    }
    catch(...)
		{
			cout<<"An unhandled exception has occurred"<<endl;
		}





	system("Pause");
	return 0 ;

} 

