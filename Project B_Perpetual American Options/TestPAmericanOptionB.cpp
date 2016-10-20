/* In this problem I created a PAmericanOption class.
   Inside the class I created a public struct called struct OptionData. (Encapsulating option parameters without T).
			struct OptionData 
				{	
					double K_s;
					double r_s;
					double sig_s;
					double b_s;	  
				}; 

  Then I created a constructor inside the PAmericanOption class and it automatically creates the OptionData sturct.
  Then I created pricing.h file and included global functions there to calculate PerpetualCall and PerpetualPut.
  In adition to general PerpetualCall and PerpetualPut functions I wrote two additional overloaded PerpetualCall and 
  PerpetualPut functions to accept sturcts.

  Finally I called functions inside pricing.h using  class memebr fucntions CallPrice_struct and PutPrice_struct.
  (Call overloaded global pricing fucntions in pricing .h)
  

*/

#include <iostream>
#include <vector>
#include "PAmericanOption.hpp"
#include "Mesher.h"
#include "Global_print.h"

using namespace std;


int main()
{ 
	//(Part a) and b))
	cout << "K = 100; sig = 0.1; r = 0.1; b =0.02; S = 110; " << endl;
	cout <<" Enter above values for Part b) solution " << endl;
	double K, S, sig , r, b;

	cout <<"K: "; cin >> K;
	cout << "S: "; cin >> S;
	cout << "sig: "; cin >> sig;
	cout << "r: "; cin >> r;
	cout << "b: "; cin >> b;

	// Create PAmericanOption object.
	//PAmericanOption(double K_c, double sig_c, double r_c, double b_c); 
	// Constructor to create object(also the struct).

	PAmericanOption obj_b(K,sig,r,b);
	cout<< "Value of C using struct :"<<obj_b.CallPrice_struct(S) << endl;
	cout<< "Value of P using struct :"<<obj_b.PutPrice_struct(S) << endl;
	cout <<'\n';
	

	//(Part c)

	vector<double> Svector = mesher(10,50,1);
	int Svecsize = Svector.size();

	vector<vector<double>> resultB_c(Svecsize, 2);
	
		for (int i = 0; i < Svecsize; ++i)
		{
			for (int j = 0; j < 2; ++j)
			{ 
				if(j ==0)
			  resultB_c[i][j] =	obj_b.CallPrice_struct(Svector[i]);
				else
			  resultB_c[i][j] =	obj_b.PutPrice_struct(Svector[i]);
			}
		}
     
     cout << " C and P as a function of S = [10,50], step size = 1 " <<endl;
	 cout << '\n';
     cout<<"  C  " "    " "  P  " ;
     print( resultB_c) ;



			
	system("Pause");
	return 0;
}






 
 