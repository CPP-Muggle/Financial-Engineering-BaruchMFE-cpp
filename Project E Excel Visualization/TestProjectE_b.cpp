#include <iostream>
#include <fstream>
#include <vector>
#include "EuropeanOption.hpp"
#include "Mesher.h"


#include "UtilitiesDJD/VectorsAndMatrices/Vector.cpp"
#include "UtilitiesDJD/ExcelDriver/ExcelMechanisms.hpp"
#include "UtilitiesDJD/ExceptionClasses/DatasimException.hpp"
#include <string>

using namespace std;


int main()
{ 

	vector<double> Svector = mesher(10,50,1); // Vector of S values.
	long Svecsize = Svector.size();

	// Batch 1
	double T1 = 0.25; double K1 = 65;	double sig1 = 0.30;	double r1 = 0.08;	double S1 = 60;	double b1 = r1;
	Vector<double, long> x(Svecsize,0.0);
	Vector<double,long> callvec1(Svecsize,0.0);
	Vector<double,long> putvec1(Svecsize,0.0);
	EuropeanOption Batch1(K1, T1, r1,sig1);


	//Batch 2
	double T2 = 1.0; double K2 = 100;	double sig2 = 0.20;	double r2 = 0.0;	double S2 = 100;double b2 = r2;
	Vector<double,long> callvec2(Svecsize,0.0);
	Vector<double,long> putvec2(Svecsize,0.0);
	EuropeanOption Batch2(K2, T2, r2,sig2);

	//Batch 3
	double T3 = 1.0; double K3 = 10;	double sig3 = 0.50;	double r3 = 0.12;	double S3 = 5;double b3 = r3;
	Vector<double,long> callvec3(Svecsize,0.0);
	Vector<double,long> putvec3(Svecsize,0.0);
	EuropeanOption Batch3(K3, T3, r3,sig3);

	//Batch 4
	double T4 = 30.0; double K4 = 100;	double sig4 = 0.30;	double r4 = 0.08;	double S4 = 100;double b4 = r4;
	Vector<double,long> callvec4(Svecsize,0.0);
	Vector<double,long> putvec4(Svecsize,0.0);
	EuropeanOption Batch4(K4, T4, r4,sig4);
	

	
	
	

	for (long j = x.MinIndex() ; j <=  x.MaxIndex(); ++j)
	{
		x[j] = Svector[j];

		callvec1[j] =	Batch1.CallPrice_struct(Svector[j]);
		putvec1[j] = 	Batch1.PutPrice_struct(Svector[j]);

		callvec2[j] =	Batch2.CallPrice_struct(Svector[j]);
		putvec2[j] = 	Batch2.PutPrice_struct(Svector[j]);

		callvec3[j] =	Batch3.CallPrice_struct(Svector[j]);
		putvec3[j] = 	Batch3.PutPrice_struct(Svector[j]);

		callvec4[j] =	Batch4.CallPrice_struct(Svector[j]);
		putvec4[j] = 	Batch4.PutPrice_struct(Svector[j]);
	}

	try 
	{
		printPairExcel(x,callvec1, putvec1, 
					string("Batch 1"), string("Current Stock Price"), string("Option Price"));
	}
	catch(DatasimException& e)
	{
		e.print();
	}
	

	try 
	{
		printPairExcel(x,callvec2, putvec2, 
						string("Batch 2"), string("Current Stock Price"), string("Option Price"));
	}
	catch(DatasimException& e)
	{
		e.print();
	}


	try 
	{
		printPairExcel(x,callvec3, putvec3, 
						string("Batch 3"), string("Current Stock Price"), string("Option Price"));
	}
	catch(DatasimException& e)
	{
		e.print();
	}


	try 
	{
		printPairExcel(x,callvec4, putvec4, 
						string("Batch 4"), string("Current Stock Price"), string("Option Price"));
	}
	catch(DatasimException& e)
	{
		e.print();
	}
		
				
	system("Pause");
	return 0;
}






 
 