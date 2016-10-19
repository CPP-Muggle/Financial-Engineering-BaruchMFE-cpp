//MAX2(x,y) takes 2 inputs and returns the larger value. 
//MAX3(x,y,z) takes 3 inputs and returns  the largest value.


#ifndef DEFS_H_INCLUDED
#define DEFS_H_INCLUDED


	#define MAX2(x,y) ( (x>y)? (x) : (y) )
	#define MAX3(x,y,z) ( (MAX2(x,y)>z)? MAX2(x,y) : z )

#endif // DEFS_H_INCLUDED


