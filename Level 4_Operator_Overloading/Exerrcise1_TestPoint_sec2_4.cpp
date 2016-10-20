//Testing added operators to the Point class.

#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include <iostream>
#include <stdlib.h>
using namespace std;


	
int main()

{
	double x1,y1 ;
	cout << "Input two values for x  and y  coordinates (Point 1) :" <<endl;
	cin >> x1 >> y1;
	cout << '\n';

	
	// Create the point 1 instance using the constructor
	Point p1(x1,y1);
	 
	//Check  operator -()
	cout <<"Check  operator -()" <<endl;
	//Point p2 = -p1;
	cout << "-Point 1:	"<< (-p1).ToString()<<'\n'  <<endl;
	
	//Check  operator *(double factor)
	cout <<"check  operator *(double factor)" <<endl;
	cout << "Input factor n to multiply. n = " ;
	double factor;
	cin >> factor;
	//Point p3 =  p1 * factor;
	cout << "(Point 1 * factor):	" <<(p1 * factor).ToString()<<'\n' <<endl;
	
	//Check operator +(const Point& p)
	cout<<"check operator +(const Point& p)" <<endl;
	double x2,y2 ;
	cout << "Input two values for x  and y  coordinates (Point 2) :" <<endl;
	cin >> x2 >> y2;
	Point p2(x2,y2);	
	//p1 + p2;
	cout <<"(Point 1 + Point 2):	"<<(p1 + p2).ToString()<<'\n'<<endl;

	//Check operator ==(const Point& p)
	cout<<"check operator ==(const Point& p)" <<endl;
	double x3,y3 ;
	cout << "Input two values for x  and y  coordinates (Point 3) :" <<endl;
	cin >> x3 >> y3;
	Point p3(x3,y3);	
	cout <<"If( Point 1 == Point 3):	"<<(p1 == p3) <<'\n'<<endl;

	//Check operator = (const Point& source)
	cout << "check operator =(const Point& p)" <<endl;
	cout <<"Point 1 = Point 3" << endl;
    p1=p3;
	cout << "New Point 1 (After assigning Point 3):	"<< p1.ToString()<<'\n'<< endl;

	//Check operator *= (double factor)
	cout << "check operator *=(double factor)" <<endl;
	cout << "Input factor n_new to multiply. n_new = " ;
	double factor_new;
	cin >> factor_new;
	//p1*factor_new;
	cout << "(New Point 1 (After assigning Point 3)) * n_new:	"<< (p1*factor_new).ToString()<<'\n' << endl;
	cout << "==================================================="<<'\n'<< endl;

	
	cout << "check operator =(const Line& l)" <<endl;
	double x4,y4 ,x5,y5 ;
	cout << "Input two values for x  and y  coordinates (Point 4) :" <<endl;
	cin >> x4 >> y4 ;
	cout << "Input two values for x  and y  coordinates (Point 5) :" <<endl;
	cin >> x5 >> y5 ;
	cout << '\n'<< endl;

	Point p4(x4,y4);
	Point p5(x5,y5);
	
	// Creating two line objects
	Line L1(p2,p4);
	Line L2(p3,p5);

	
	//Description about two lines.
	cout <<"Line between Point 2 and Point 4" <<endl;
	cout <<"L1 is a : "<<L1.ToString()<<'\n'<<endl; // Line between Point 2 and Point 4

    cout <<"Line between Point 3 and Point 5" <<endl;
	cout <<"L2 is a : "<<L2.ToString()<<'\n'<<endl;

	L1=L2;
    cout <<"L1 = L2" << endl;
   	cout << "New L1 :	"<< L1.ToString()<<'\n'<< endl;
	cout << "==================================================="<<'\n'<< endl;

	system("pause");	

	cout << "check operator =(const Circle& c)" <<endl;
	Circle C1(p4,5);	
	Circle C2(p5,10);	

	//Description about the circle. (Check ToString Function)
	cout <<"C1 is  : "<<C1.ToString()<<endl;
	cout <<"C2 is  : "<<C2.ToString()<<'\n'<<endl;

	C1=C2;
    cout <<"C1 = C2" << endl;
   	cout << "New C1 :	"<< C1.ToString()<<'\n'<< endl;

		
	system("pause");
	return 0;
}
