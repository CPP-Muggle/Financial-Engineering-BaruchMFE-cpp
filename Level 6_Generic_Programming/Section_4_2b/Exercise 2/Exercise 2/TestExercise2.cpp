# include "Array.h"
# include "NumericArray.h"

using namespace  Shihan;
using namespace Containers;


int main()
{	

	try {
	// Check constructors
	NumericArray<int> test_arr1(3);
	cout<<"Size of test_arr1 : "<<test_arr1.Size()<<'\n'<<endl;

	NumericArray<int> test_arr2(3);
	cout<<"Size of test_arr2 : "<<test_arr2.Size()<<'\n'<<endl;


	// Assign values to two numerical arrays.
	for (int j=0; j<test_arr1.Size();j++) 
	{
		test_arr1[j] = 2*j;
		test_arr2[j] = 3*j;

		cout << "Element " << j  <<" of test_arr1" <<endl;
		cout <<	test_arr1.GetElement(j) << endl;
	}

	cout <<'\n' << endl ;

	for (int j=0; j<test_arr1.Size();j++) 
	{   
		cout << "Element " << j  <<"  of test_arr2" <<endl;
		cout <<	test_arr2.GetElement(j) << endl;
	}


	// Check the Dot Product function.
	cout << " Checking DotProduct Function" <<endl;
	cout << " =============================  " <<endl;

	cout<<"Dot Prouduct is : "<<test_arr1.DotProduct(test_arr2)<<'\n'<<endl;

	// Check the  * (T factor) operation.
	cout << " Checking operator * (T factor) " <<endl;
	cout << " =============================  " <<endl;

	cout << " (test_arr2*2) " <<endl;
	for (int j=0; j<test_arr2.Size();j++)
	{	cout<< (test_arr2*2).GetElement(j) <<endl; }

	cout <<'\n' << endl ;


	cout << " Checking operator (operator +)  and (operator =)  " <<endl;
	cout << " ================================================  " <<endl;

	NumericArray<int> test_arr3;
	test_arr3=test_arr2 + test_arr1;

	cout << " Elements of added arrays ( test_arr2 + test_arr1 ) :"  << endl;
	cout << " ====================================================" <<endl;
	for (int j=0; j<test_arr2.Size();j++)
	{	cout<< test_arr3.GetElement(j) <<endl; }

	cout <<'\n';


	// Throwing an error. ('SizeMissmatchException')
	NumericArray<int> test_arr4(4);
	test_arr1.DotProduct(test_arr4);		//   Trying to get dot product between arrays with unequal lengths. 


	}

	catch(ArrayException& err_obj)             // catch bock- catches 'ArrayException' base class
    {                                         // throws 'SizeMissmatchException' object by reference
        cout<<err_obj.GetMessage();               
    }
    catch(...)								 // unidentified exception handler
    {
        cout<<"An unhandled exception has occured!\n"<<endl;
    }
	
	system("Pause");
	return 0 ;

} 

// what assumptions do you make about the type uses as template arguments ?
// Answer : All the types we use should be numeric types such as int , double or float. 

// Can you create a mumeric array with Point Objets ?
// Answer :  Technically yes ... But then there is no meaningful use of function DotProduct(). 
//           So I would say create a numeric array with Point objects is meaningless.
	