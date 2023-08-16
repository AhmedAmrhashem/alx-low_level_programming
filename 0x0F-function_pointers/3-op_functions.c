#include "3-calc.h"

/**
 * op_add: a function that adds two integers
 * @a: the first integer
 * @b: the second integer
 *
 * return: the additon of two integers
 */
int op_add(int a, int b)
{
	return a+b;
}

/**
 * op_sub: a function that adds two integers
 * @a: the first integer
 * @b: the second integer
 *
 * return: the subbtraction of two integers
 */
int op_sub(int a, int b)
{
	return a-b;
}

/**
 * op_mul: a function that multiplies two integers
 * @a: the first integer
 * @b: the second integer
 *
 * return: the multiplication of two integers
 */   
int op_mul(int a, int b)
{
	return a*b;
}

/**
 * op_div: a function that divides two integers
 * @a: the first integer
 * @b: the second integer
 *
 * return: the division of two integers
 */   
int op_div(int a, int b)
{
	return a/b;
}

/**
 * op_mod: a function that modul two integers
 * @a: the first integer
 * @b: the second integer
 *
 * return: the modulus of two integers
 */   
int op_mod(int a, int b)
{
	return a%b;
}
