# include <iostream>
# include "Array.h"
# include "Stack.h"
# include "StackException.h"


using namespace std;
using namespace  Shihan;
using namespace Containers;


int main()
{	
	
	int x;
	cout << "Enter a length for the Stack : " ;
	cin >> x;

	Stack<int> test_stack(x);
/************************************************************************************************/
	// Trying to pop elements from the stack without pushing anything. This should give an exception.
	try {

		for (int i=0; i<x; i++)
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

	for (int i=0; i<=x; i++)             // when i = x , Stack is full 
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

	for (int i=0; i<=x; i++)             // when i = x , Stack is empty.
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

	
	
	system("Pause");
	return 0 ;

} 


	