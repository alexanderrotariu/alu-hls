#include "apint_arith.h"
 
int main ()
{
	signed char inA;
	signed char inB;
	signed char out;
	signed char operation;
	signed char rem;


	//Operation modes
	// 1 = addition
	// 2 = subtraction
	// 3 = multiplication
	// 4 = division

	//Adding
	inA = 8;
	inB = 4;
	operation = 1;

	apint_arith(inA, inB, operation, &out, &rem);
	printf("%d + %d = %d \n", inA, inB, out);


	//Subtarcting

	inA = 9;
	inB = 5;
	operation = 2;

	apint_arith(inA, inB, operation, &out, &rem);
	printf("%d - %d = %d \n", inA, inB, out);

	//Multiplication

	inA = 10;
	inB = 6;
	operation = 3;

	apint_arith(inA, inB, operation, &out, &rem);
	printf("%d * %d = %d \n", inA, inB, out);

	//Division

	inA = 11;
	inB = 7;
	operation = 4;

	apint_arith(inA, inB, operation, &out, &rem);
	printf("%d / %d = %d , remainder %d \n", inA, inB, out, rem);



}
