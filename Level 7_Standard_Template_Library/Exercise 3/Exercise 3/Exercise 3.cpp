//Exercise 3 STL Algorithms

#include <iostream>
#include <algorithm>
#include <vector>
#include "compare.h"

using namespace std;

double const global_val= 10.25;
bool LessThan (double val) { return (val<global_val); } //Global function to  check  the double input val is smaller than a certain value

int main ()
{
	vector<double> my_vec(10);
	for (int i = 0; i <my_vec.size(); ++i)
	{	
		my_vec[i] = 2.55*i;										  // Adding data to the vector.
		cout<<"Element "<< i <<" of my_vec is "<<my_vec[i]<<endl; // Using index operator to access elements in the vector.
	}

	//Check count_if using global fucntion.
	int less_count_fn = count_if (my_vec.begin(), my_vec.end(), LessThan);
	cout << "\nUsing a function: Number of elements less than " << global_val << " are " << less_count_fn<<'\n'<<endl;


	//Check count_if using function object.
	compare test_obj(20);
    int less_count_clss = count_if (my_vec.begin(), my_vec.end(), test_obj);
	cout << "Using a class: Number of elements less than " << test_obj.get() << " are " << less_count_clss<< endl;

	system("Pause");
	return 0;
}

