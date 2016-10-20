/*Mesher function. Global function to produce a mesh array of doubles between min_val and max_val.
  Mesh size is h.
*/
#ifndef MESHER_HPP
#define MESHER_HPP

#include <vector>
#include <iostream>
using namespace std;

std::vector<double> mesher(double min_val, double max_val, double h)
{
	double rMin = min_val;
	double rMax = max_val;
	int nelements = (rMax - rMin)/h + 1;
	
	vector<double> xarr(nelements);
	xarr[0] = rMin;
	xarr[xarr.size()-1] = rMax; 

	for (int n = 1; n < xarr.size()-1; ++n)
	{
		xarr[n] = xarr[n-1] + h;
	}

	return xarr;
}


#endif