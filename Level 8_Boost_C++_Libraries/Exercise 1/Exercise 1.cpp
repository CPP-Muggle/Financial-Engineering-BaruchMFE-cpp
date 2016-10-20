//Smart Pointers
#include "boost/shared_ptr.hpp"
#include "Shape.h"
#include "Array.h"
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
 
// C++ Standard Library
using namespace Shihan;
using namespace CAD;
using namespace Containers;
using namespace std;

typedef boost::shared_ptr<Shape> ShapePtr;	// Typedef for a shared pointer to Shape
typedef Array<ShapePtr> ShapeArray;			// Typedef for an array with shapes stored as shared pointers


int main ()
{	

	//Initial scope
	{
	// Create a ShapeArray of 3 pointers to shapes
		ShapeArray Shape_Array(3);
 
	//Since no shpae object pointers assigned yet output should be 0.
		cout << "Array before filled with shapes" << endl;
		cout << "===============================" << endl;

		cout << "Reference Count Shape_Array [Shape 0]: " << Shape_Array[0].use_count() << std::endl;
		cout << "Reference Count Shape_Array [Shape 1]: " << Shape_Array[1].use_count() << std::endl;
		cout << "Reference Count Shape_Array [Shape 2]: " << Shape_Array[2].use_count() << std::endl;

	
		// Set the poiters to shapes and store in the array.
		Shape_Array[0] = ShapePtr(new Point(10, 10));
		Shape_Array[1] = ShapePtr(new Line(Point (10, 10), Point (20,20)));
		Shape_Array[2] = ShapePtr(new Circle(Point (10,10), 5));

		// Print the shapes
        for (int i = 0; i < 3; i++)
            std::cout << Shape_Array.GetElement(i)->ToString() << std::endl;

		//  Count should be 1.
		cout << "\nArray after filled with shapes" << std::endl;
		cout << "==============================" << endl;

		cout << "Reference Count Shape_Array [Shape 0]: " << Shape_Array[0].use_count() << std::endl;
		cout << "Reference Count Shape_Array [Shape 1]: " << Shape_Array[1].use_count() << std::endl;
		cout << "Reference Count Shape_Array [Shape 2]: " << Shape_Array[2].use_count() << std::endl;
	


		cout <<  "\nNew Scope begins from here" << std::endl;
		cout <<  "============================" << endl;
		/**************************************************************************************/
            {
			  	//Same pointer is used to define another pointer.           

				ShapePtr shapePtr_1(Shape_Array[0]);
                std::cout << shapePtr_1->ToString() << std::endl;    // Print the shape
 
                ShapePtr shapePtr_2(Shape_Array[1]);
                std::cout << shapePtr_2->ToString() << std::endl;    // Print the shape
 
                ShapePtr shapePtr_3(Shape_Array[2]);
                std::cout << shapePtr_3->ToString() << std::endl;    // Print the shape
                


                // Count should be 2.
		
                std::cout << "\nReference Count Shape_Array [Shape 0]: " <<Shape_Array[0].use_count() << std::endl;
                std::cout << "Reference Count Shape_Array [Shape 1]: "   <<Shape_Array[1].use_count() << std::endl;
                std::cout << "Reference Count Shape_Array [Shape 2]: "   <<Shape_Array[2].use_count() << std::endl;
			}
		/***********************************************************************************************************/

		cout <<  "\nNew Scope ends here" << std::endl;
		cout <<  " ======================" << endl;
	

		//count should be 1.
		cout << "Reference Count Shape_Array [Shape 0]: " << Shape_Array[0].use_count() << std::endl;
		cout << "Reference Count Shape_Array [Shape 1]: " << Shape_Array[1].use_count() << std::endl;
		cout << "Reference Count Shape_Array [Shape 2]: " << Shape_Array[2].use_count() << std::endl;
	}
	//End of initial scope
	
		
	system ("pause");
    return 0;
}
 

//Output at the end of the initial scope (Check the functionlity of smart pointers).
//Arrary Destructor			- Array Object Destruction.    
//Destructor: Circle Class	- Circle Object Destruction. 
//Destructor: Point Class   - Point Object Destruction (Related to Circle class).
//Shape Destructor          - Shape Object Destruction (Base for Point related to Circle class)
//Shape Destructor			- Shape Object Destruction (Base for Circle class)
//Destructor: Line Class    - Line Object Destructor.
//Destructor: Point Class	- Point Object Destructor. (Related to Line)
//Shape Destructor          - Shape Object Destructor. (Base of Point related to Line)
//Destructor: Point Class	- Point Object Destructor. (Related to Line)
//Shape Destructor			- Shape Object Destructor. (Base of Point related to Line)
//Shape Destructor			- Shape Object Destructor. (Base for )
//Destructor: Point Class	- Point Object Destructor.
//Shape Destructor			- Shape Object Destructor.(Base for the point)


 