// An Array class

#ifndef ARRAY_H
#define ARRAY_H




namespace Shihan {
	namespace Containers {

		template<typename T>		 // Declare Array class as a templated class.
		class Array{

		private:
	
			T* m_data;							    // Data member for a dynamic C array of T type objects
			int m_size;								// Data member for the size of the array.


		public:
			Array () ;									// Default constructor
			Array(int a_size) ;							// Constructor with one argument
			Array(const Array<T>& cp_arr);				// Copy constructor
			~Array();									// Destructor

	
	
			int Size () const;							// Returns the size of the array.
			void SetElement(T* P, int index) ;			// Set elements in the array.
			T& GetElement(int index) const ;			// Get elements from the array.
	

			Array<T>& operator = (const Array<T>& source);	//Assignment operator
	
			T& operator [] (int index);					// [] operator can be used for both reading and writing.
			const T& operator [] (int index) const;		// const [] operator can be used for reading const Point objects.
	
};

						}
				}

#ifndef ARRAY_CPP     // Checking ARRAY.CPP file and including it with ARRAY.H	file.
#include "Array.cpp"
#endif


#endif