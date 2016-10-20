/* Probability density and cumulative density values for normal distribution (for given x),
   using boost libraries.
*/
# ifndef NORMALFUNCTION_HPP
# define NORMALFUNCTION_HPP


#include <iostream>

using namespace std;
#include <boost/math/distributions/normal.hpp>
#include <boost/math/distributions.hpp> // For non-member functions of distributions
using namespace boost::math;


double N_BOOST(double x)
{

	normal_distribution<> myNormal(0.0, 1.0); 

	return cdf(myNormal, x);

}

double n_BOOST(double x)
{

	normal_distribution<> myNormal(0.0, 1.0); 

	return pdf(myNormal, x);

}

	


# endif
