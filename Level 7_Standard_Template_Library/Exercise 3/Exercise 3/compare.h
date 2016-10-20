#ifndef COMPARE_H
#define COMPARE_H
// A class to compare values.
class compare
{
private:
	double m_val;
public:

	compare::compare():m_val(5.0) {}			//Default constructor
	compare::compare(double val):m_val(val){}	//Overloaded constructor
	compare::~compare() {}						//Destructor

	compare::compare(const compare& source):m_val(source.m_val){}	//Copy constructor
	compare& compare::operator=(const compare& source)				//Assignment operator
 	{m_val = source.m_val; return *this;}

	bool compare::operator()(double input) { return input<m_val; } //Overloading the roud bracket operator.
	double compare::get() const {return m_val;}					   //Public function to access private data.
};

#endif COMPARE_H