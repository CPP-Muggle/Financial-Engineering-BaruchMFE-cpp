// I implemented seperate header files and definition files for Sum() to maintain consistency.
#ifndef	TEMPLATEDSUM_H
#define TEMPLATEDSUM_H

#include<map>
using namespace std;

template<typename T> double Sum (const T& container);
template <typename T,typename U> double Sum(const map<T,U>& container);
template <typename T> double Sum(const T &my_startItr, const T &my_endItr);
template <typename T1, typename T2>
double Sum(typename const map<T1,T2>::const_iterator &my_startItr, typename const map<T1,T2>::const_iterator &my_endItr);


#ifndef TEMPLATEDSUM_CPP    // Checking templatedsum.cpp file and including it inside templatedsum.h file.
#include "templatedsum.cpp"
#endif

#endif