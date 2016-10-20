// Exponential Distribution and Poisson Distribution

#include <boost/math/distributions/exponential.hpp>
#include <boost/math/distributions/poisson.hpp>

#include <boost/math/distributions.hpp> // For non-member functions of distributions

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// Don't forget to tell compiler which namespace
	using namespace boost::math;

	double scaleParameter = 0.5;

	//Default type is 'double'.
	exponential_distribution<> myExponential(scaleParameter);


	//Properties of Exponential function.
	//Source  : http://en.wikipedia.org/wiki/Exponential_distribution
	//Source  : http://www.wolframalpha.com/input/?i=exponential+distribution&lk=4&num=3&lk=4&num=3

	// Mean : 1/scaleParameter = 1/(0.5) = 2
	// Variance : 1/(scaleParameter^2) = 1/(0.5^2) = 4
	// Standard Deviation : Sqrt(Variance) = 2
	// Mode : 0
	// Ex. kurtosis : 6
	// pdf : scaleParameter * exp (- scaleParameter * x)
	// cdf : 1 - exp (- scaleParameter * x)

	// Choose precision
	cout.precision(5); // Number of values behind the comma

	cout << "\nExponential distribution: \n";
	cout <<   "========================\n";
	cout << "Mean: " << mean(myExponential) << ", standard deviation: " << standard_deviation(myExponential) << endl;

	// Distributional properties
	double x = 10.00;
	
	// scaleParameter * exp (- scaleParameter * x) = 0.5*exp (- 0.5 * 10) = 0.0034
	cout << "\npdf (At x = 10): " << pdf(myExponential, x) << endl; 

	//1 - exp (- scaleParameter * x) = 1 - exp (- 0.5 * 10) = 0.9933
	cout << "cdf: (Range from 0 to 10) " << cdf(myExponential, x) << endl;

	// Other properties
	cout << "\nmean: " << mean(myExponential) << endl;			//Mean : 1/scaleParameter = 1/(0.5) = 2
	cout << "variance: " << variance(myExponential) << endl;	// Variance : 1/(scaleParameter^2) = 1/(0.5^2) = 4
	cout << "mode: " << mode(myExponential) << endl;			// Mode : 0
	cout << "kurtosis excess: " << kurtosis_excess(myExponential) << endl;	//Ex_kurtosis : 6
	cout << "kurtosis: " << kurtosis(myExponential) << endl;				//kurtosis : 9
	cout << "median: " << median(myExponential) << endl;  // 50 th percentile = 0.693147 / scaleParameter ;

	cout << "characteristic function:(At x =10)  " << chf(myExponential, x) << endl;
	cout << "hazard: (At x =10) " << hazard(myExponential, x) << endl;




	cout << "\nPoisson distribution: \n";
	cout <<   "========================\n";

	// Source : http://www.wolframalpha.com/input/?i=Poisson+distribution
	// Source : http://en.wikipedia.org/wiki/Poisson_distribution

	double mean = 3.0;
	poisson_distribution<double> myPoisson(mean);

	cout << "\npdf (At x = 10): " << pdf(myPoisson, x) << endl; 
	cout << "cdf: (Range from 0 to 10) " << cdf(myPoisson, x) << endl;

	//Standard deviation : sqrt(mean) = sqrt(3) = 1.732
	cout << "standard deviation: " << standard_deviation(myPoisson) << endl; 

	//Variance = mean = 3.
	cout << "variance: " << variance(myPoisson) << endl;

	cout << "median: " << median(myPoisson) << endl;
	cout << "mode: " << mode(myPoisson) << endl;

	//Ex_kurtosis = (1/mean) = 0.333
	cout << "kurtosis excess: " << kurtosis_excess(myPoisson) << endl;

	//(1/mean) + 3 = 3.3333
	cout << "kurtosis: " << kurtosis(myPoisson) << endl;


	cout << "characteristic function:(At x =10)" << chf(myPoisson, x) << endl;
	cout << "hazard:(At x =10) " << hazard(myPoisson, x) << endl;

	vector<double> pdfList;
	vector<double> cdfList;

	double start = 0.0;
	double end = 10.0;
	long N = 30;		// Number of subdivisions

	double val = 0.0;
	double h = (end - start) / double(N);

	for (long j = 1; j <= N; ++j)
	{
		pdfList.push_back(pdf(myPoisson, val));
		cdfList.push_back(cdf(myPoisson, val));

		val += h;
	}

	cout <<"\nPDF values for poisson for range [0.0 : h : 10.0]; h = (10 - 0)/30\n" << endl;
	cout << "*******************************************************************\n" << endl;
	for (long j = 0; j < pdfList.size(); ++j)
	{
		cout << pdfList[j] << ", ";

	}

	cout <<"\n\nCDF values for poisson for range [0.0 : h : 10.0]; h = (10 - 0)/30\n" << endl;
	cout << "*******************************************************************\n" << endl;

	for (long j = 0; j < cdfList.size(); ++j)
	{
		cout << cdfList[j] << ", ";
	}


	system ("pause");
	return 0;
}