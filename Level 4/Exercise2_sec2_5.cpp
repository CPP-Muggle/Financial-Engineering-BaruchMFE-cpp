#include <iostream>
#include "Point.hpp"

using namespace std;


int main()
{
	 
    const int arr_size = 3;								// Question asks for 3 elements in the array
    Point** p_Point_arr = new Point*[arr_size];			// Create an array of pointers
 

    for (int i = 0; i <arr_size; i++)
    {
        p_Point_arr[i] = new Point(i+1,i+1);			// For each element in array  point on the heap.
        cout << "The point in [ " << i << " ] position of array is " << (*p_Point_arr[i]).ToString() << endl;
    }

 
    for (int i = 0; i < arr_size; i++)
    {	delete  p_Point_arr[i];		}					// Delete each element in array by for loop
    
 
  	delete [] p_Point_arr;



	system("Pause");
	return 0 ;

} 