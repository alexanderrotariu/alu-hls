#include "apint_arith.h"

void apint_arith(signed char inA, signed char inB, signed char operation, signed char *out, signed char *rem)
{

	if(operation == 1)
	{
		*out = inA + inB;
		*rem = 0;
	}
	else if(operation == 2)
	{
		*out = inA - inB;
		*rem = 0;
	}
	else if(operation == 3)
	{
		*out = inA * inB;
		*rem = 0;
	}
	else if(operation == 4)
	{
		*out = inA / inB;
		*rem = inA % inB;
	}
	else
	{
		*out = 0;
		*rem = 0;
	}


} 


