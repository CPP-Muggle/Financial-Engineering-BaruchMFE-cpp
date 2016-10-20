// Simulate Dice throwing.

#include <boost/random.hpp>						// Convenience header file
#include <iostream>
#include <ctime> 								// std::time
#include <map>

#include <boost/math/distributions/uniform.hpp>
//#include <boost/math/distributions.hpp>			// For non-member functions of distributions

using namespace std;

int main()

{
	//Throwing dice.

	//Mersenne Twister.
	boost::random::mt19937 myRng;

	//Set the seed.
	myRng.seed(static_cast<boost::uint32_t> (std::time(0)));

	//Uniform in range[1,6]
	boost::random::uniform_int_distribution<int> six(1,6);

	//Structure to hold outcome + Frequencies
	map<int,long> statistics;

	//Outcome from the throwing.
	int outcome;

	//Total number of throwings.
	long int N = 1000000; 

	//Counting variables for six outcomes.
	long count_1, count_2, count_3, count_4, count_5, count_6;
	count_1=0; count_2=0; count_3=0; count_4=0; count_5=0; count_6=0;

	for (long n = 1; n <= N; ++n)
	{	
		outcome = six(myRng);	//Generating a random number between 1 - 6.

		if ( outcome == 1)
		{count_1++;}
		else if ( outcome == 2)
		{count_2++;}	
		else if ( outcome == 3)
		{count_3++;}
		else if ( outcome == 4)
		{count_4++;}
		else if ( outcome == 5)
		{count_5++;}
		else
		{count_6++;}

	}

	statistics[1] = count_1; 	statistics[2] = count_2; 	statistics[3] = count_3;
	statistics[4] = count_4;	statistics[5] = count_5;	statistics[6] = count_6;
    
	
	//Traversing the map and producing the outcome.
	for(map<int,long>::const_iterator map_itr = statistics.begin(); map_itr !=statistics.end(); ++map_itr)

	{  
		cout<<"Trial "<< map_itr->first << " has "<<setprecision(6)<<(double)(map_itr->second)*100/N<<"%"<<" outcomes." <<endl;
	}

system("pause");
return 0 ;

}
