// Check behavior of static variables in the Array class.
# include "Array.h"

using namespace  Shihan;
using namespace Containers;


int main()
{
	// I initialized the satic data memeber to be 10.
	Array<int> intArray1;
	Array<int> intArray2;
	Array<double> doubleArray;

	cout<<intArray1.DefaultSize() <<endl;
	cout<<intArray2.DefaultSize() <<endl;
	cout<<doubleArray.DefaultSize() <<endl;

	// Following three commented lines should give the same results as above three lines.
	// Because of static nature instance name doesn't matter only type matters.
	// cout<<Array<int>::DefaultSize() <<endl;
	// cout<<Array<int>::DefaultSize() <<endl;
	// cout<<Array<double>::DefaultSize() <<endl;


	intArray1.DefaultSize(15);			// Set default value for int type arrays.

	cout << intArray1.DefaultSize()   << endl;
	cout << intArray2.DefaultSize()   << endl;
	cout << doubleArray.DefaultSize() << endl;


	

	system("Pause");
	return 0 ;

} 

//Declaring a class member static results in the member being shared across all instances of a the class. 

// This is very similar with a template class as well. In this case the static member is shared across all instances of a template
// class with the same specialization.

// Static member X within a template class <Type T> is static within all instances of T.(According to the specialization).
// In this problem X (default_size) is static within all instances of T specialized for int (let me say  X_int) and all instances for
// T specialized for double (let me say X_double) independently. (X_int and X_double are not real variables, I used them for sake of 
// explanation).

//  For first three Array declarations, (Array<int> intArray1;Array<int> intArray2;Array<double> doubleArray;) since I didn't explicitly
// set default_size according to type T (according to int and double) both type of arrays share the same initial default_size static variable 
// which is 10. (Accoding to the notaions I used, both X_int and X_double use 10. )

//  cout<<intArray1.DefaultSize() <<endl;     = 10;
//	cout<<intArray2.DefaultSize() <<endl;	  = 10;
//	cout<<doubleArray.DefaultSize() <<endl;	  = 10;

// As soon as I set the defaul_size variable = 15 for int type arrays, (intArray1.DefaultSize(15);) all the int type array instances will
// share that value. Now  X_int = 15 , but still X_double = 10;

// Since X is static and X_int = 15; both following lines should give 15. 

//cout << intArray1.DefaultSize()   << endl;
//	cout << intArray2.DefaultSize()   << endl;

// But still X_double =10; following line should give 10.
//cout << doubleArray.DefaultSize() << endl; 
	