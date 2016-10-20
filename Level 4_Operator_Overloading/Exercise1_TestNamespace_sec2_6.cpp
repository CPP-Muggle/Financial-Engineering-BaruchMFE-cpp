//Testing added operators to the Point class.

#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "Array.h"
#include <iostream>
#include <stdlib.h>
using namespace std;


	
int main()

{   cout <<"Testing Namespaces for Point : "<<endl;
	Shihan::CAD::Point p1(1,1);    // Access class Point using ful namespace for Point class.
    Shihan::CAD::Point p2(2,2);
    cout<<p1<<endl;
	cout<<p2<<endl;


	cout <<"Testing Namespaces for Line : "<<endl;
	using namespace Shihan::CAD;  
	Line L1(p1,p2);
	cout<<L1<<'\n'<<endl; 


	cout <<"Testing Namespaces for Array : "<<endl;
	using namespace Shihan::Containers;    // Use declaration for a complete namespace (Containers)
    Array test_array(2);
	test_array[0] = p1;
	test_array[1] = p2;
    cout<<test_array[0]<<endl;
	cout<<test_array[1]<<endl;   
       
 
	cout <<"Testing the alias : "<<endl;
	namespace SCAD=Shihan::CAD;        // Use Circle class by creating a shorter alias for EthanLim::CAD.
    SCAD::Circle c1(p1,5);
    cout<<c1<<endl;

	system("pause");
	return 0;
}
