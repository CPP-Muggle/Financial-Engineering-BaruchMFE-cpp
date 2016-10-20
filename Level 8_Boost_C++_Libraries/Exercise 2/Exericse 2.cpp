#include "boost/tuple/tuple.hpp"
#include "boost/tuple/tuple_io.hpp"
#include <string>
#include <iostream>

using namespace std;
using boost::tuple;

//Create a typedef for a Person that contains name, age and length.
typedef tuple<string, int, double> Person;

//Function to print the Perosn tuple.
void print(Person p)
{ 
	string name = p.get<0>();
	int age = p.get<1>();
	double length = p.get<2>();

	std::cout << "Person's name is " << name << ", age is " << age << " and height is  " << length <<'\n'<<endl;

}

int main()
{
	Person Person1= boost::make_tuple(string("Shihan1"),30,6.0);
	Person Person2= boost::make_tuple(string("Shihan2"),28,5.8);
	
	print(Person1);
	print(Person2);

	//Increment the age of one of the persons.
	Person1.get<1>() += 1;
	std::cout<<"Age of Person "<<Person1.get<0>()<< " after incremented by 1:	"<<Person1.get<1>()<<endl;
	

	system("pause");
	return 0;
}

