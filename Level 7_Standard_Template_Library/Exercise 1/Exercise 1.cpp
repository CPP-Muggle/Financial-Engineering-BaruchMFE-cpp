// Exercise 1: STL Containers

#include <list>
#include <vector>
#include <map>
#include <iostream>
#include <string>

using namespace std;

int main ()
{
/***************************************************************************/
	// Create a list of doubles and add some data.
	list<double> my_list;

	for (int i = 0; i < 5; i++)
	{
		my_list.push_back(2.55*i);
		my_list.push_front(2.55*i);
	}

	// Printing elements in the list.
	cout << "Elements in my_list : " << endl;
	list<double>::const_iterator itr;

	//Accessing elements using iterators.
	for (itr = my_list.begin(); itr != my_list.end(); ++itr)
	{
		cout << *itr << "	 ";
	}

	cout << "\n\nFirst element of my_list is : "<< my_list.front() << endl;			//Use the front() command.
	cout << "\nLast  element of my_list is : "<< my_list.back ()<<'\n' << endl;		//Use the back() command.

	//	

/**************************************************************************/
	// Create vector of doubles and add some data.
	vector<double> my_vec(10);
	for (int i = 0; i <my_vec.size(); ++i)
	{	
		my_vec[i] = 2.55*i;										  // Adding data to the vector.
		cout<<"Element "<< i <<" of my_vec is "<<my_vec[i]<<endl; // Using index operator to access elements in the vector.
	}
		
	//	Grow the vector.
	my_vec.push_back(2.55*10);
	my_vec.push_back(2.55*11);
	my_vec.push_back(2.55*12);

/*************************************************************************/
	//Create a map.
	map<string,double> my_map;
	my_map["Person A"] = 10.25;
	my_map["Person B"] = 20.50;
	my_map["Person C"] = 41.00;

	//Accessing elements using square bracket operator.
	cout<<"\nPerson A owes me $ :"<<my_map["Person A"]<< endl;
	cout<<"\nPerson B owes me $ :"<<my_map["Person B"]<< endl;
	cout<<"\nPerson C owes me $ :"<<my_map["Person C"]<<'\n'<< endl;
		 
		
	//Accessing elements using iterators
	for(map<string,double>::const_iterator map_itr = my_map.begin(); map_itr !=my_map.end(); ++map_itr)
	{
		cout<< map_itr->first << " owes me $ : " <<map_itr->second<< endl;
	}
		

	system("Pause");
	return 0;
}