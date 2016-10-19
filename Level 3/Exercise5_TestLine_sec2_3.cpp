// Test program to generate Lines using user provided data.

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
	cout <<""<<endl;

	double x2,y2 ;
	cout << "Input two values for x  and y  coordinates (Point 2) :" <<endl;
	cin >> x2 >> y2;
	cout <<""<<endl;


	// Create the point 1 instance using default constructor
	Point p1(x1,y1);

	// Create the point 2 instance using default constructor 
	Point p2(x2,y2);

	//Line at origin
	Line L1;	

	//Line between user given points.
	Line L2(p1,p2);		

	//Description about two lines.
	cout <<"L1 is a : "<<L1.ToString()<<endl;
	cout <<"L2 is a : "<<L2.ToString()<<endl;
	cout <<""<<endl;


	cout << "Line 1 starting  coordinates : "<< L1.P1().X()<<"," <<L1.P1().Y() <<endl;
	cout <<""<<endl;


	cout << "Line 1 ending  coordinates : "<<L1.P2().X()<<"," <<L1.P2().Y() <<endl;
	cout <<""<<endl;


	cout << "Line 2 starting  coordinates : "<<L2.P1().X()<<"," <<L2.P1().Y() <<endl;
	cout <<""<<endl;


	cout <<"Line 2 ending  coordinates : "<< L2.P2().X()<<","<< L2.P2().Y() <<endl;
	cout <<""<<endl;

	//Length of lines
	cout <<"L1's length: "<<L1.Length()<<endl;
	cout <<"L2's length: "<<L2.Length()<<endl;


	//New user input request.
	double x1_new,y1_new ;
	cout << "Input two new values for x  and y  coordinates to check setter functions (Point 1) :" <<endl;
	cin >> x1_new >> y1_new;
	cout <<""<<endl;

	double x2_new,y2_new ;
	cout << "Input two new values for x  and y  coordinates to check setter functions (Point 2) :" <<endl;
	cin >> x2_new >> y2_new;
	cout <<""<<endl;

	//Creating new poits using new user inputs.
	Point p3(x1_new,y1_new);  
	Point p4(x2_new,y2_new);

	//Setting starting and end point of the Line
	L2.P1(p3);
	L2.P2(p4);

	
	cout << "Line 2 new starting  coordinates : "<<L2.P1().X()<<"," <<L2.P1().Y() <<endl;
	cout <<""<<endl;

	cout <<"Line 2 new ending  coordinates : " << L2.P2().X()<<","<< L2.P2().Y() <<endl;
	cout <<""<<endl;

	cout <<"L2's new length: "<<L2.Length()<<endl;
	cout <<""<<endl;


	system("pause");
	return 0;
}
