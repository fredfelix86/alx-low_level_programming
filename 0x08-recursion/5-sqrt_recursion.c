#include "main.h"

/**
 * square_root: Returns the natural square root of a number.
 * @a: Same number as n
 * @b: number that iterates from 1 to n
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int square_root(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (square_root(a, b + 1));
}
/**
 * _sqrt_recursion - returns square root of n
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _sqrt_recursion(int n)
{
	return (square_root(n, 1));
}
