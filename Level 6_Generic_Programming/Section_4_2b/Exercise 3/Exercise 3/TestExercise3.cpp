# include <iostream>
# include "PointArray.h"

using namespace std;
using namespace  Shihan;
using namespace Containers;


int main()
{	

	
    // Here I am creating Point (0,0), Point (1,1), Point (2,2),...........
	// Lenght between each point is sqrt(2).
	// Total length = (Size of arr - 1) * sqrt (2)  (test_arr.Length() should return this value.)

	// To check excption enter x = 1;

    int x;
	std::cout << "Enter the number of points you want :  " ;
	std::cin >> x ;


    PointArray test_arr(x);		// Created arry with x number of  elements.

	for (int i=0; i<x ;i++)

	{
		test_arr[i]=Point(i,i);
	}
	
	std::cout << "The total length between points in the array : " << test_arr.Length() << endl;
 
    
	system("Pause");
	return 0 ;

} 


	