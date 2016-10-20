#include <iostream>
#include "Point.hpp"
# include "Array.h"

using namespace std;


int main()
{
	

	Array default_arr(10);	// Default array
	for (int j=0; j<10; j++)
	{   
		default_arr.SetElement(&Point(),j);				  // Test SetElement()
		cout << default_arr.GetElement(j)<<endl;		  // Test the GetElement()
	}        


	int x =6 ;				// Size of the array
	Array test_arr(x);      // Checking the constructor with one input argument.
	cout << "Size of the array constructed with one input argument :" << test_arr.Size()<<'\n' <<endl; 
	// Creating 6 elements for the array ()
	for (int j=0; j< x; j++)
	{   
		test_arr.SetElement(&Point(j,j),j);				  // Test SetElement()
		cout << test_arr.GetElement(j)<<endl;			  // Test the GetElement()
	}    
	
	
	Array test_arr_assign(x);
	test_arr_assign = test_arr;  //Assignment
	
	cout << "Check the assignment Operator and [] operator at the same time\n" << endl;
	cout << test_arr_assign[1] << endl;

	
	cout << "Check the const [] operator \n" << endl;
	Point p_const(10,20); // Check the const [] operator
	const  Array test_arr_const(1);
	cout << test_arr_const[1] << endl;		
	
	

	system("Pause");
	return 0 ;

} 