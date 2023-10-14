#include <stdio.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * op_add - return the sum of a & b
 *
 * @a: the first number
 * @b: the second number
 *
 * Return: The sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return the difference of a & b
 *
 * @a: the first number
 * @b: the second number
 *
 * Return: The difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the product of a & b
 *
 * @a: the first number
 * @b: the second number
 *
 * Return: The product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return the division of a & b
 *
 * @a: the first number
 * @b: the second number
 *
 * Return: The division
 */

int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
}

/**
 * op_mod - return the remainder..
 * ... of a by b
 *
 * @a: the first number
 * @b: the second number
 *
 * Return: The remainder of the division
 */

int op_mod(int a, int b)
{
	return (a % b);
}
