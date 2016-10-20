/* This file contains four functions to calculate Delta for Call and Put prices, Gamma for Call and Put prices.
		CallDelta(double S, double K, double T, double r, double sig, double b)
		PutDelta(double S, double K, double T, double r, double sig, double b) 
		CallGamma(double S, double K, double T, double r, double sig, double b) 
		PutGamma(double S, double K, double T, double r, double sig, double b) 
*/

#ifndef GREEKS_H
#define GREEKS_H

#include "Normal_Boost.h"

double CallDelta(double S, double K, double T, double r, double sig, double b) 
{
	double tmp = sig * sqrt(T);

	double d1 = ( log(S/K) + (b+ (sig*sig)*0.5 ) * T )/ tmp;


	return exp((b-r)*T) * N_BOOST(d1);

}

double PutDelta(double S, double K, double T, double r, double sig, double b) 
{
	double tmp = sig * sqrt(T);

	double d1 = ( log(S/K) + (b + (sig*sig)*0.5 ) * T )/ tmp;

	return exp((b-r)*T) * (N_BOOST(d1) - 1.0);
}

double CallGamma(double S, double K, double T, double r, double sig, double b) 
{
	double tmp = sig * sqrt(T);

	double d1 = ( log(S/K) + (b + (sig*sig)*0.5 ) * T )/ tmp;
	double d2 = d1 - tmp;

	return ( n_BOOST(d1) * exp((b-r)*T) ) / (S * tmp);
}

double PutGamma(double S, double K, double T, double r, double sig, double b) 
{
	return CallGamma(S, K, T, r, sig,  b);
}



#endif 