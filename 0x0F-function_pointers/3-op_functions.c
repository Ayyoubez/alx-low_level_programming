#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
*op_add - adittion of 2 numbers
*@a: parameter
*@b: parameter
*Return: result of operatio
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
*op_sub - substraction of 2 numbers
*@a: parameter
*@b: parameter
*Return: result of operatio
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
*op_mul - multiplication of 2 numbers
*@a: parameter
*@b: parameter
*Return: result of operation
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
*op_div - division of 2 nymbers
*@a: parameter
*@b: parameter
*Return: result of operation
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
*op_mod - modulo of 2 numbers
*@a: parameter
*@b: parameter
*Return: result of operation
*/

int op_mod(int a, int b)
{
	return (a % b);
}
