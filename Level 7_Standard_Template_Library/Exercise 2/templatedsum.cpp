#ifndef TEMPLATEDSUM_CPP
#define TEMPLATEDSUM_CPP

#include "templatedsum.h"
#include<map>


//Sum for the vectors/lists
template <typename T>
double Sum (const T& container)
{
    T::const_iterator itr_begin = container.begin();
    T::const_iterator itr_end = container.end();

    double my_sum = 0.0;
    for (itr_begin; itr_begin != itr_end; ++itr_begin)
    {
		my_sum += (*itr_begin);
    }
    return my_sum;
}

//Sum for the maps
template <typename T,typename U>
double Sum(const map<T,U>& container) 

{
    
    map<T,U>::const_iterator itr_begin = container.begin();
    map<T,U>::const_iterator itr_end = container.end();
    
	double my_sum=0.0;
	for (itr_begin; itr_begin != itr_end; ++itr_begin)
	{
        my_sum+=(itr_begin->second);
	}
    
    return my_sum;
}


//sum  for containers other then maps using two iterators as input.
template <typename T>
double Sum(const T &my_startItr, const T &my_endItr)
{
    T my_Itr;
    double my_sum = 0.0;
	for (my_Itr = my_startItr; my_Itr != my_endItr; my_Itr++)
	{
		my_sum = my_sum + *my_Itr;
	}
    return my_sum;
}

//sum for maps using two iterators.
template <typename T1, typename T2>
double Sum(typename const map<T1,T2>::const_iterator &my_startItr, typename const map<T1,T2>::const_iterator &my_endItr)
{
 
    double my_sum = 0.0;
    map<T1,T2>::const_iterator my_Itr;
    for (my_Itr = my_startItr; my_Itr != my_endItr; my_Itr++)
	{
        my_sum += my_Itr->second;
	}
    return my_sum;
}

#endif