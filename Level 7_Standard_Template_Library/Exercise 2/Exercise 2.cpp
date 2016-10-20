// STL Iterators.


#include<iostream>
#include"templatedsum.h"
#include<list>
#include <vector>
#include<map>
#include<string>

using namespace std;

int main()
{	
	/****************************************************************************************/
	
	list<double> my_list;

		for (int i = 0; i < 5; i++)
	{
		my_list.push_back(i);
		my_list.push_front(i);
	}

	//Check template <typename T> double Sum (const T& container) for a list.
	cout<<"Sum of all the elements in my_list are: "<<Sum(my_list)<<endl; //(2*sum(0 to 4))

	//Check template <typename T> double Sum(const T &my_startItr, const T &my_endItr) for a list
	list<double>::const_iterator start_lItr =  my_list.begin() ;
    list<double>::const_iterator end_lItr = my_list.end();
    cout << "Sum of  elements in the list using iterator arguments: " << Sum(start_lItr, end_lItr)<<'\n' << endl;

	/******************************************************************************************/

	vector<double> my_vec(10);
	for (int i = 0; i <my_vec.size(); ++i)
	{	
		my_vec[i] = i;
	}

	//Check template <typename T> double Sum (const T& container) for a vector.
	cout<<"Sum of all the elements in my_vec are: "<<Sum(my_vec)<<endl;	//sum(0 to 9)


	//Check template <typename T> double Sum(const T &my_startItr, const T &my_endItr) for a vector.
	vector<double>::const_iterator start_vItr =  my_vec.begin() ;
    vector<double>::const_iterator end_vItr = my_vec.end();
    cout << "Sum of  vector elements using iterator arguments: " << Sum(start_vItr, end_vItr)<<'\n' << endl;
	
	/********************************************************************************************/
   
	//Create a map.
	map<string,double> my_map;
	my_map["Person A"] = 10.25;
	my_map["Person B"] = 20.50;
	my_map["Person C"] = 41.00;
	
	//Check template <typename T,typename U> double Sum(const map<T,U>& container) 
    cout<<"Sum of all the elements in my_map are: "<<Sum(my_map)<<endl;

	//Check template <typename T1, typename T2> double Sum(typename const map<T1,T2>::const_iterator &my_startItr, 
	//                                                                      typename const map<T1,T2>::const_iterator &my_endItr)
	map<string,double>::const_iterator mapStartIter = my_map.begin();
    map<string,double>::const_iterator mapEndIter = my_map.end();
	cout << "Sum of the map using iterator arguments: " << Sum <string,double>(mapStartIter,mapEndIter) << endl;
	/******************************************************************************************/



	system("Pause");
	return 0;
}