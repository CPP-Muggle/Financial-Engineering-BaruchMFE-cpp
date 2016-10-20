// Exercise 3: Variant
#include <iostream>;
#include <string>;

#include "boost/variant.hpp"


#include "Shape.h";
#include "Point.hpp";
#include "Line.hpp";
#include "Circle.hpp";
#include "visitor.h";

using namespace std;

using namespace Shihan;
using namespace CAD;


using boost::variant;
typedef boost::variant<Point,Line,Circle> ShapeType;

//A Function that returns variant according to user request.
ShapeType ShapeVariant() 
{
    cout << "Please select a Shape Type\n1: Point\n2: Line\n3: Circle\n\nSelection: ";
	int choice;
	cin >> choice;
	
	switch(choice)
    {  
		case 1: return Point(10,10); break;
		case 2: return Line(Point(10,10),Point(20,20)); break;
		case 3: return Circle(Point(10,10),5); break;
		default: cout << "Invalid selection." << endl; break;
    }   
}

// Global function to send a ShapeType to cout object.
ostream& operator << (ostream& os, ShapeType& st)
{
    if(Point* point = boost::get<Point>(&st))
    {
        os << point->ToString()<<endl;
        return os;
    }
    else if(Line* line = boost::get<Line>(&st))
    {
        os << line->ToString()<<endl;
        return os;
    }
    else if(Circle* circle = boost::get<Circle>(&st))
    {
        os << circle->ToString()<<endl;
        return os;
    }
}



int main()
{

/********** Section 1 **************************************************/
	
ShapeType return_shape = ShapeVariant();
std::cout <<"\nDescription: "<<return_shape<<endl;
	

/********** Section 2 **************************************************/
ShapeType Line_variant = Line();
Line ln;

	 try
	 {
		ln = boost::get<Line>(Line_variant);
		cout << "Value got from Variant: " << ln.ToString() << endl;
	 }
	 catch (boost::bad_get& err)
	 {
		cout << "Error: " << err.what() << endl;
	 }
	 

// When Variant doesn't contain a Line.
ShapeType Point_variant = Point();
	try
	 {
		ln = boost::get<Line>(Point_variant);
		cout << "Value got from Variant: " << ln.ToString() << endl;
	 }
	 catch (boost::bad_get& err)
	 {
		cout << "\nError: " << err.what() << endl;
	 }
	 
/********** Section 3 **************************************************/
	 //Visiting the Point.
	 cout<<"\n All the points are moved by (10,10)" <<endl;
	 cout<<"======================================" <<endl;

	 visitor pointvisitor(10,10);
	 ShapeType pointVariant = Point(5, 5);
     boost::apply_visitor(pointvisitor, pointVariant);  
	 cout<<"\nAfter Moving:(Intial Point(5,5)) "<<pointVariant<<endl;

	 //Visiting the Line
	 visitor linevisitor(10,10);
	 ShapeType lineVariant = Line(Point(5, 5),Point(15,15));
     boost::apply_visitor(linevisitor, lineVariant);
	 cout<<"After Moving:(Intial Points(5,5),(15,15)) "<<lineVariant<<endl;

	 //Visiting the Circle
	 visitor circlevisitor(10,10);
	 ShapeType circleVariant = Circle(Point(5,5),5);
	 boost::apply_visitor(circlevisitor, circleVariant);
	 cout<<"After Moving:Intial Points(5,5) "<<circleVariant<<endl;

system ("pause");
return 0;
}



