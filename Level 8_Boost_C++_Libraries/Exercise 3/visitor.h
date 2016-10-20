//Visitor class. Implemented as a inline class.

#ifndef VISITOR_H
#define VISITOR_H

#include "boost/variant.hpp"
#include "Shape.h"
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"

using namespace std;
using namespace Shihan;
using namespace CAD;

 //Visitor Class.
class visitor : public boost::static_visitor<>
{

private:
	double m_dx;
	double m_dy;

public:
	visitor():m_dx(0),m_dy(0){}							//Default Constructor
	visitor(double v1, double v2):m_dx(v1),m_dy(v2){}	//Overloaded Cosntructor

	visitor(const visitor& source){}		// Copy constructor
	~visitor() {}							//Destructor

	void operator()(Point& p) const
    {
        p.X(p.X() + m_dx);
		p.Y(p.Y() + m_dy);
    }

	 void operator () (Line& l) const
     {
         Point line_p1 = l.P1();                      // move start point.
         line_p1.X(line_p1.X() + m_dx);
         line_p1.Y(line_p1.Y() + m_dy);
         l.P1(line_p1);

         Point line_p2 = l.P2();                      // move end point.
         line_p2.X(line_p2.X() + m_dx);
         line_p2.Y(line_p2.Y() + m_dy);
         l.P2(line_p2);
     }
 
     void operator () (Circle& c) const               // move center point.
     {
        Point circle_p = c.CentrePoint();
        circle_p.X(circle_p.X() + m_dx);
        circle_p.Y(circle_p.Y() + m_dy);
        c.CentrePoint(circle_p);
     }
        

};

#endif
