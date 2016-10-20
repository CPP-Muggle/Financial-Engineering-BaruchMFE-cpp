#include <iostream>
#include "Point.hpp"

using namespace std;


int main()
{
	   // Section 1 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////

		Point* P1 = new Point();		// Default constructor
		
		Point* P2 = new Point(10,10);	// Overloaded constructor with two arguments
	   
		Point* P3 = new Point(*P2);		// Copy constructor


		double distance;
		distance = P2 -> Distance (*P3); // *P2 and *P3 are refering to objects with same coordinate values. So distance should return 0.
        //distance = (*P2).Distance(*P3);
   
		cout << distance <<'\n'<<endl;
		cout << (*P1) << endl;
		cout << (*P2) << endl;
		cout << (*P3) << endl;

		delete P1;
		delete P2;


		// Section 2 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		int array_size;
		cout << "Enter the size of the arrary: " ;
		cin >> array_size;

		
		Point arr_in_stack[5];					// This doesn't give a compiler error.
		//Point arr_in_stack[array_size];		// This gives a compiler error. Arrays on the stack must have the size set at compile time.

		
		Point* arr_in_heap = new Point[array_size];	//Creating arrary in the heap. Here only default constructor is possible.
		double x,y ;


		for (int i=0;i<=array_size-1;i++)
		{
			std::cout<<"\nPlease insert coordinates x and y for the Point in the position "<<(i)<<" in the array: ";
			std::cin>>x;
            std::cin>>y;

		    arr_in_heap[i]=  Point();
			arr_in_heap[i].X(x);
			arr_in_heap[i].Y(y);

			cout << "\nDescription of " << i << " element in the array " << arr_in_heap[i].ToString() <<endl; 


			// It is possible to use other constructor than the default constructor for the objects created in the array.
			// Following code segement is possible.


			//arr_in_heap[i]=  Point(x,y);
			//cout << "\nDescription of " << i << " element in the array " << arr_in_heap[i].ToString() <<endl;
		}
        
		delete [] arr_in_heap ;

		system("Pause");
		return 0 ;

} 