# include "Point.hpp"
# include "Line.hpp"
# include "Circle.hpp"
# include "Array.h"



using namespace  Shihan;
using namespace  CAD;
using namespace Containers;


int main()
{
	
 
	Array<Point> points(5);				//	Create an array of points using templated arrary class.

	for(int i=0; i<5 ; i++)
		{
		points.SetElement(&Point(i,i),i);
	    cout <<points.GetElement(i)<<"\n"<<endl;
	    }

	
	Array<Line> lines(5);				//	Create an array of default lines using templated arrary class.

	for(int i=0; i<5 ; i++)
		{
		 cout << lines[i].ToString() <<'\n'<<endl;	   
	    }


	Array<Circle> circles(5);			//	Create an array of default cricles using templated arrary class.

	system("Pause");
	return 0 ;

} 

// ifndef Array_cpp
// include "Array.cpp"
// endif

// I included the above code snippet inside Array.h file. 
// When preprocesser runs it will include the content of  Array.h file here. Inside Array.h file there is a preprocessive directive
// to include the content of the Array.cpp file (Hence content of the Array.cpp file is also aumtomatically included here).
// Hence I don't need to include Array.cpp file explicitly.