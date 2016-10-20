#include <iostream>
# include "Point.hpp"
# include "Array.h"
# include "Shape.h"
# include "ArrayException.h"
# include "OutOfBoundsException.h"

using namespace std;
using namespace  Shihan;
using namespace  CAD;
using namespace Containers;


int main()
{
	
 //*************************************************************************************************/
	//Checking GetElement() Exception
	try {

	Array default_arr(10);								  // Default array
	for (int j=0; j<10; j++)
		{   
			default_arr.SetElement(&Point(),j);				  
			cout << default_arr.GetElement(j+1)<<endl;		  // j+i is a non-existent element.
		}    

		}

	catch(ArrayException& err_obj)
		{
			cout << err_obj.GetMessage() << endl;
		}
    catch(...)
		{
			cout<<"An unhandled exception has occurred \n"<<endl;
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

	catch(ArrayException& err_obj)
		{
			cout << err_obj.GetMessage() << endl;
		}

    catch(...)
		{
			cout<<"An unhandled exception has occurred"<<endl;
		}

/****************************************************************************************************/
	// Checking Array::operator [] (int index) 
	try {

			Array default_arr(10);								  // Default array.
			cout << default_arr[10] << endl;                      // Index out of bounds.

		}
	catch(ArrayException& err_obj)
		{
			cout << err_obj.GetMessage() << endl;
		}
    catch(...)
		{
			cout<<"An unhandled exception has occurred"<<endl;
		}

/*******************************************************************************************************/
	//  Checking Array::operator [] (int index) const 

	try {
			const  Array test_arr_const(1);
	        cout << test_arr_const[2] << endl;	
		}
	catch(ArrayException& err_obj)
		{
			cout << err_obj.GetMessage() << endl;
		}
    catch(...)
		{
			cout<<"An unhandled exception has occurred"<<endl;
		}

	system("Pause");
	return 0 ;

} 

