// Header file for Perpetual American Option 
# ifndef PAMERICANOPTION_HPP
# define PAMERICANOPTION_HPP


#include <string>
using namespace std;

class PAmericanOption
{
private:

	double r;		// Interest rate
	double sig;		// Volatility
	double K;		// Strike price
	double b;		// Cost of carry
	string optType;	// Option name (call, put)
	

	
public:	
	    // Struct to encapsulate the option parameters.
		struct OptionData 
			{	
				double K_s;
				double r_s;
				double sig_s;
				double b_s;	  
			};

	OptionData* Optionstruct; //OptionData struct.

	//  Default constructor
	 PAmericanOption();	

	 //	Overloaded constructor
	 PAmericanOption:: PAmericanOption(double K, double sig, double r,  double b, string str); 
    
	// Overloaded constructor to create  OptionData sturct instance.
	 PAmericanOption:: PAmericanOption(double K_c, double sig_c, double r_c, double b_c);

	// Copy constructor
	 PAmericanOption(const  PAmericanOption& option2);	

	//	Destructor
	virtual ~ PAmericanOption();	

	//	Assignment operator
	 PAmericanOption& operator = (const  PAmericanOption& option2);

	// Functions that calculate option price 
	double Price(double U) const;

	// Modifier functions
	void toggle();		// Change option type (C/P, P/C)

	// To call global pricing functions in pricing.h
	double CallPrice(double U) const ;
	double PutPrice(double U) const;
	
	//To call overloaded global pricing fucntions in pricing .h
	double PAmericanOption::CallPrice_struct(double S) const;
	double PAmericanOption::PutPrice_struct(double S ) const;
};

# endif