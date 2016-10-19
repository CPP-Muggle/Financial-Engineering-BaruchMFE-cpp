// Test program to generate Lines using user provided data.

#include "Point.hpp"
#include "Circle.hpp"
#include <iostream>
#include <stdlib.h>
using namespace std;

	
int main()

{
	double x,y ; // Variables for the center ofthe circle.
	cout << "Input  x  and y  coordinates for the center of the circle :" <<endl;
	cin >> x >> y;
	cout <<""<<endl;

	double r; // Variable for the  Radius of the circle.
	cout << "Input a value for the radius of the circle :" <<endl;
	cin >> r;
	cout <<""<<endl;

	
	//Create the center of the circle using the point class.
	Point p(x,y);

	//A Circle at origin
	Circle C1;	

	//Circle with given point as Circle(const Point& cp, const double& r)
	Circle C2(p,r);		

	//Description about the circle. (Check ToString Function)
	cout <<"C1 is  : "<<C1.ToString()<<endl;
	cout <<"C2 is  : "<<C2.ToString()<<endl;
	cout <<""<<endl;

	//Check Getter functions.
	cout << "C1 centre point is : "<< C1.CentrePoint().X()<<"," <<C1.CentrePoint().Y() <<endl;
	cout << "C1 radius is : "<< C1.Radius() <<endl;
	cout <<""<<endl;

	//Check Getter functions.
	cout << "C2 centre point is : ("<< C2.CentrePoint().X()<<"," <<C2.CentrePoint().Y()<<")" <<endl;
	cout << "C2 radius is : "<< C2.Radius() <<endl;
	cout <<""<<endl;



	//Check Diameter (), Area(), Circumference() functions.
	cout << "C1 Diameter is : " << C1.Diameter()<<endl;
	cout << "C1 Area is : " <<C1.Area()<<endl;
	cout << "C1 Circumference is : " <<C1.Circumference()<<endl;
	cout <<""<<endl;

	//Check Diameter (), Area(), Circumference() functions.
	cout << "C2 Diameter is : " << C2.Diameter()<<endl;
	cout << "C2 Area is : " <<C2.Area()<<endl;
	cout << "C2 Circumference is : " <<C2.Circumference()<<endl;
	cout <<""<<endl;

	//New user input request to check setter functions.
	double x_new,y_new ;
	cout << "Now we are going to check the setter functions" << endl;
	cout << "Input two new  x  and y for the center of the circle :" <<endl;
	cin >> x_new >> y_new;
	cout <<""<<endl;
		
	double r_new; // Variable for the  Radius of the circle.
	cout << "Input a new value for the radius of the circle :" <<endl;
	cin >> r_new;
	cout <<""<<endl;

	Point p_new(x_new,y_new);

	//Setting new values using setter functions
	C2.CentrePoint(p_new);
	C2.Radius(r_new);

	cout <<"C2 is  : "<<C2.ToString()<<endl;
	cout << "C2 centre point is : ("<< C2.CentrePoint().X()<<"," <<C2.CentrePoint().Y()<<")" <<endl;
	cout << "C2 radius is : "<< C2.Radius() <<endl;
	cout <<""<<endl;


	system("pause");
	return 0;
}
 