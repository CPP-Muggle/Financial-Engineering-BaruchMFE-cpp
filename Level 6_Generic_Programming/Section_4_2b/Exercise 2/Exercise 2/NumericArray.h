// Header file for templated class Numeric Array.
#ifndef NUMERICARRAY_H
#define NUMERICARRAY_H




namespace Shihan {
	namespace Containers {

		template<typename T>									  // Declare NumericArray class as a templated class.
		class NumericArray :public Array <T>
		
		{
			
		private:
			// No Data members.
			 
		public:
			NumericArray();										    // Default Constructor.
			NumericArray(int a_size);							    // Constructor with one input argument.
			NumericArray(const NumericArray<T>& source);		    // Copy constructor
			virtual ~NumericArray();							    // Default Destructor



			T DotProduct (const NumericArray<T>& source) const;					//	A fucntion to calculate dot product.

			NumericArray<T>& operator = (const NumericArray<T>& source);		//	Assignment operator

			NumericArray<T> operator * (T factor) const;						//	Scale the elements of the numeric array by a factor.
			
			NumericArray<T> operator + (const NumericArray<T>& source) const ;	//	Add the elements of two numeric arrays.
			

	
		};

						}
				}


#ifndef NUMERICARRAY_CPP     // Checking NUMERICARRAY.CPP file and including it with NUMERICARRAY.H	file.
#include "NumericArray.cpp"
#endif


#endif