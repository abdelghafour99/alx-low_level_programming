#include "main.h"

/**
 * add - addition
 * @a : the first number
 * @b : the second number
 * Return: a + b
 */
int add(int a, int b)
{
	return (a + b);

}

/**
 * sub - sub
 * @a : the first number
 * @b : the second number
 * Return: a - b
 */
int sub(int a, int b)
{
	return (a - b);

}

/**
 * mul - multiplication
 * @a : the first number
 * @b : the second number
 * Return: a * b
 */
int mul(int a, int b)
{
	return (a * b);

}

/**
 * div - division
 * @a : the first number
 * @b : the second number
 * Return: a / b
 */
int div(int a, int b)
{
	if (b)
		return (a / b);
}

/**
 * mod - modolus
 * @a : the first number
 * @b : the second number
 * Return: a % b
 */
int mod(int a, int b)
{
	return (a % b);
}
