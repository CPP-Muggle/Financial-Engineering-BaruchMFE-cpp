# include <iostream>
# include "Array.h"
# include "Stack.h"
# include "StackException.h"


using namespace std;
using namespace  Shihan;
using namespace Containers;


int main()
{	
	
	

	Stack<int,3> test_stack;
/************************************************************************************************/
	// Trying to pop elements from the stack without pushing anything. This should give an exception.
	try {

		for (int i=0; i<3; i++)
			test_stack.pop();	
		 }

	catch(StackException& err_obj)
		{
			cout << err_obj.GetMessage() << endl;
		}

    catch(...)
		{
			cout<<"An unhandled exception has occurred \n"<<endl;
		}

/*****************************************************************************************************/
	
	// Trying to push values when the stack is full. This should give an exception.
     try {

   cout <<"Checking the exception throwing when the stack is full" <<endl;
   cout <<"====================================================== \n" <<endl; 

	for (int i=0; i<=3; i++)             // when i = x , Stack is full 
		test_stack.push(3*i);			 // Pushing the values to the Stack
		
		}
	
	catch(StackException& err_obj)
		{
			cout << err_obj.GetMessage() << endl;
		}
    catch(...)
		{
			cout<<"An unhandled exception has occurred \n"<<endl;
		} 

/*****************************************************************************************************/
	// Trying to pop values when the stack is empty. This should give an exception.


	 try {

   cout <<"Checking the exception throwing when the stack is empty " <<endl;
   cout <<"====================================================== \n" <<endl; 

	for (int i=0; i<=3; i++)             // when i = x , Stack is empty.
		test_stack.pop();				 // Poping the values from the Stack

		}
		
	catch(StackException& err_obj)
		{
			cout << err_obj.GetMessage() << endl;
		}
    catch(...)
		{
			cout<<"An unhandled exception has occurred \n"<<endl;
		} 

	Stack<int,5> test_stack2;
	// test_stack = test_stack2; This gives an compiler error. Only stacks with the same size template argument can be copied/assigned.
	
	system("Pause");
	return 0 ;

} 


	