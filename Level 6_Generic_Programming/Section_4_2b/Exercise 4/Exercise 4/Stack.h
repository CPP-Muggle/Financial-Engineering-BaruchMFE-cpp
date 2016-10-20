// Header file for the templated Stack class.

#ifndef STACK_H
#define STACK_H




namespace Shihan {
	namespace Containers {

		template<typename T>						// Declare Stack class as a templated class.
		class Stack {

		private:
			 
			int m_current;							// Data member to store the current index of the the array.
			Array<T> stack_array;	     			// Stack uses an array object as a data member.
			
		public:
			Stack () ;									// Default constructor
			Stack(int s_size);							// Constructor with size as the input argument.
			Stack(const Stack<T>& stack_arr);			// Copy constructor
			~ Stack();									// Destructor

	
			void push(const T& new_ele);			// Push element onto stack.
			const T& pop();						    // Pop last pushed element. 
									 

			
			
			Stack<T>& operator = (const Stack<T>& source);	//Assignment operator
	
			
	
};

						}
				}


#ifndef STACK_CPP     // Checking STACK.CPP file and including it with ARRAY.H	file.
#include "Stack.cpp"
#endif


#endif
