//Testing added operators to the Point class.

#include "Point.hpp"
#include "Line.hpp"
#include <iostream>
#include <stdlib.h>
using namespace std;


	
int main()

{
	double x1,y1 ;
	cout << "Input two values for x  and y  coordinates (Point 1) :" <<endl;
	cin >> x1 >> y1;
	cout << '\n';
	Point p1(x1,y1);	// Create the point 1 instance using the constructor
	cout << "Output from the operator << (For a Point instance):	" <<p1<<'\n'<< endl; 


	double x2,y2 ;
	cout << "Input two values for x  and y  coordinates (Point 2) :" <<endl;
	cin >> x2 >> y2;
	Point p2(x2,y2);	// Create the point 2 instance using the constructor.
	Line L1(p1,p2);		// Create a line instance.
	cout << "Output from the operator << (For a Line instance):	" <<L1<<'\n'<< endl; 


	/*double r ;
	cout << "Input the radius of the circle :" <<endl;
    cin >> r;
	Circle C1(p1,r);	//Create the circle 1 instance.
	cout << "Output from the  operator << (For a Circle instance):" << C1<<'\n'<< endl; */

		
	system("pause");
	return 0;
}
