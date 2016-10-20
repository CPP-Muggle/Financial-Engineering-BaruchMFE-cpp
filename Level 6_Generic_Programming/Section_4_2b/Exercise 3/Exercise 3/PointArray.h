// Header file for PointArray class.

#ifndef POINTARRAY_H
#define POINTARRAY_H

#include "Point.hpp"
#include "Array.h"

using namespace Shihan;
using namespace CAD;

namespace Shihan {
	namespace Containers {

																		// Declare PointArray as a class.
		class PointArray :public Array<Point>
		
		{
			
		private:
			// No Data members.
			 
		public:
			PointArray();										    // Default Constructor.
			PointArray(int a_size);							        // Constructor with one input argument.
			PointArray(const PointArray& source);				    // Copy constructor
			virtual ~PointArray();							        // Default Destructor



			double Length() const;									//Returns the total length between points in the array.
			PointArray&  operator=(const PointArray& source);		//Assignment operator	
					
							
		};

						}
				}





#endif // POINTARRAY_H

