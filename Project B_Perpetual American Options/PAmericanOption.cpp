// Implementation of PAmericanOption class.
#include <iostream>

#include "PAmericanOption.hpp"
#include "pricing.h"
#include <math.h> 



// Default constructor , 
PAmericanOption::PAmericanOption()  
{
	r = 0.08;
	sig= 0.3;
	K = 65;
	b = 0.02;				
	optType = "C";		// Default call option
}

//	Overloaded constructor
PAmericanOption::PAmericanOption(double K_c, double sig_c, double r_c, double b_c, string str)  // overloaded constructor 
{ 
	K = K_c;
	r = r_c;
	sig = sig_c;
	b = b_c;
	optType = str;
}

// overloaded constructor to creat a the sturct

PAmericanOption::PAmericanOption(double K_c, double sig_c, double r_c, double b_c)
{
	Optionstruct = new OptionData;
	Optionstruct->K_s = K_c;
	Optionstruct->sig_s = sig_c;
	Optionstruct->r_s = r_c;
	Optionstruct->b_s = b_c;
	optType = "C";

}

// Copy constructor
PAmericanOption::PAmericanOption(const PAmericanOption& o2) 
{ 

	r	= o2.r;
	sig = o2.sig;	
	K	= o2.K;
	b	= o2.b;
	optType = o2.optType;
}


PAmericanOption::~PAmericanOption()
{

}


//Assignment operator
PAmericanOption& PAmericanOption::operator = (const PAmericanOption& option2)
{
	if (this == &option2) return *this;

	PAmericanOption::PAmericanOption(option2);
	return *this;
}



// Calling global Call and Put option functions using private functions
double PAmericanOption::CallPrice(double S) const
{
	return PerpetualCall(K, S, sig, r, b);
}


// Calling global Call and Put option functions using OptionData sturct.
double PAmericanOption::PutPrice(double S) const
{	
    
	return PerpetualCall(K, S, sig, r, b);

}


///////////////////////////////////////////////////////////////////////////////
// CallPrice_sturct() to pass struct
double PAmericanOption::CallPrice_struct(double S) const
{
	return PerpetualCall(S, (*this).Optionstruct);
}

// CallPrice_sturct() to pass struct
double PAmericanOption::PutPrice_struct(double S) const
{	
    return PerpetualPut(S, (*this).Optionstruct);
}
////////////////////////////////////////////////////////////////////////////////

// Function to decide which Optin price function to use.
double PAmericanOption::Price(double U) const
{


	if (optType == "C")
	{	
		return CallPrice(U);
	}
	else
	{
		return PutPrice(U);
	}
}	


// Change option type (C/P, P/C)
void PAmericanOption::toggle()
{ 

	if (optType == "C")
		optType = "P";
	else
		optType = "C";
} 


